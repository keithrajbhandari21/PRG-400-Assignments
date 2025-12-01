# dot_product.pyx

def dot_product(double[:] a, double[:] b):
    """
    Compute the dot product of two 1D arrays.
    """
    cdef int n = len(a)
    cdef double result = 0
    cdef int i
    for i in range(n):
        result += a[i] * b[i]
    return result
