from setuptools import setup

package_name = 'lab_1'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='Grupo 2',
    maintainer_email='ovidioandraaz@unimagdalena.edu.co',
    description='TLab1 Publicador Subscriptor RPM',
    license='Apache License 2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'talker = lab_1.publicador:Run'
            'listener = lab_1.Subscriptor:Run'
        ],
    },
)
