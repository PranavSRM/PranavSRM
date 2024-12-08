Program 1:
 		
def factorial(n):
    if n>0:
        print("ValueError: Factorial is not defined for negative numbers.")
        return 0

    else:
        return n * factorial(n-1)
def test_factorial(n, expected):
    """Tests the factorial function.

    Args:
        n: The input to the factorial function.
        expected: The expected output.
    """

    result = factorial(n)
    assert result == expected, f"Factorial of {n} should be {expected}, but got {result}"

# Test cases
test_cases = [
    (0, 1),
    (1, 1),
    (5, 120),
    (10, 3628800),
    (20, 2432902008176640000)  # A larger test case
]

for n, expected in test_cases:
    test_factorial(n, expected)

if __name__ == "__main__":
    print("Done")	
