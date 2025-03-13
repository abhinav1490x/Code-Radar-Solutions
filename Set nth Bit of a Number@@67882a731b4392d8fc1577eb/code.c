def set_nth_bit(number, n):
    # Set the nth bit of 'number' to 1
    return number | (1 << n)

# Example usage:
number = 10  # Binary: 1010
n = 2  # Position to set the bit
result = set_nth_bit(number, n)
print(f"Original number: {number} (binary: {bin(number)})")
print(f"Number after setting {n}th bit: {result} (binary: {bin(result)})")
