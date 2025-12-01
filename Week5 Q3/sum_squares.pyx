# sum_squares.pyx

def sum_of_squares(int n):
    """
    Compute the sum of squares from 1 to n.
    """
    cdef int i
    cdef int total = 0
    for i in range(1, n + 1):
        total += i * i
    return total
