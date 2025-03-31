
import cv2
import numpy as np

def computeHomography(Us, Vs):
    """
    Estimate the homography matrix from given 4 points
    """
    # form the matrix AH = 0, then solve for H using SVD
    aList = []
    
    # TODO: your code

    matrixA = np.matrix(aList)

    # SVD  composition
    u, s, v = np.linalg.svd(matrixA)
    # reshape the rightmost singular vector into a 3x3
    H = np.reshape(v[8], (3, 3))

    #normalize and now we have H
    H = (1/H.item(8)) * H
    return H


def warp_and_augment(im_logo, im_dst, H):
    """
    Given logo image, destination image, and the homography
    Find the warped final output
    """
    imw, imh = im_dst.shape[1], im_dst.shape[0]
    im_warped = cv2.warpPerspective(im_logo, H, (imw, imh), flags=cv2.INTER_LINEAR, borderMode=cv2.BORDER_TRANSPARENT)
    # get mask for augmented image
    mask = np.array(np.nonzero(im_warped))
    im_out = im_dst.copy()
    for n in range(mask.shape[1]):
        i, j, k = mask[0, n], mask[1, n], mask[2, n]
        im_out[i, j, k] = im_warped[i, j, k]

    # There are better ways to do this: 
    # TODO: for Bonus +5 point
    return im_warped, im_out