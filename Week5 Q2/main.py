# main.py

import numpy as np
from dot_product import dot_product

# Ask user for length of arrays
n = int(input("Enter the length of the arrays: "))

# Input elements for first array
a = []
print("Enter elements for first array:")
for i in range(n):
    a.append(float(input(f"a[{i}]: ")))

# Input elements for second array
b = []
print("Enter elements for second array:")
for i in range(n):
    b.append(float(input(f"b[{i}]: ")))

# Convert lists to numpy arrays
a_np = np.array(a, dtype=float)
b_np = np.array(b, dtype=float)

print("\nBefore:")
print("Array a:", a_np)
print("Array b:", b_np)

# Compute dot product
result = dot_product(a_np, b_np)

print("\nAfter:")
print("Dot product:", result)
