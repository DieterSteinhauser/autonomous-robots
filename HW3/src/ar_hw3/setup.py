from setuptools import find_packages, setup

package_name = 'ar_hw3'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='boole',
    maintainer_email='dieter.steinhauser@outlook.com',
    description='TODO: Package description',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'turtle_circle = ar_hw3.turtle_circle:main',
            'turtle_spiral = ar_hw3.turtle_spiral:main',
        ],
    },
)
