# main.py

from sum_squares import sum_of_squares

# Ask user for input
n = int(input("Enter a positive integer n: "))

print("Before:")
print("Input n:", n)

# Compute sum of squares
result = sum_of_squares(n)

print("\nAfter:")
print(f"Sum of squares from 1 to {n} = {result}")
