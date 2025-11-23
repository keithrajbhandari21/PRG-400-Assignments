from setuptools import setup, Extension

module = Extension("csquare", sources=["csquare.c"])

setup(
    name="csquare",
    version="1.0",
    ext_modules=[module]
)
