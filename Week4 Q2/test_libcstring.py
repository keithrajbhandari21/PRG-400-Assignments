import ctypes

# Load the shared library
lib = ctypes.CDLL("./libcstring.dylib")

# Define argument and return types
lib.shout.argtypes = [ctypes.c_char_p]
lib.shout.restype = ctypes.c_char_p

# Call the function
result = lib.shout(b"hello world")

# Convert back to Python string
print(result.decode("utf-8"))
