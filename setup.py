import os
from distutils.core import setup
from pybind11.setup_helpers import Pybind11Extension


setup(name="myadd",
      version="1.0.0",
      ext_modules=[Pybind11Extension("my_add", ["add.cpp"])],
      )