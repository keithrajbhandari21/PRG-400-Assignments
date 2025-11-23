import ctypes

# Load library
lib = ctypes.CDLL("./libcppconcat.dylib")

# Set function signature
lib.concat_buffer.argtypes = [ctypes.c_char_p, ctypes.c_char_p, ctypes.c_char_p, ctypes.c_int]
lib.concat_buffer.restype = None

# Allocate buffer in Python
buffer = ctypes.create_string_buffer(100)

# Call function
lib.concat_buffer(b"Hello, ", b"World!", buffer, 100)
print(buffer.value.decode("utf-8"))

lib.concat_buffer(b"Python ", b"C++", buffer, 100)
print(buffer.value.decode("utf-8"))
