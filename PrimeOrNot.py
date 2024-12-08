def isPrime(n):
	
    if n <= 1:
        return False
    if n <= 3:
        return True
    if n % 2 == 0 or n % 3 == 0:
        return False
    i = 5
    while i * i <= n:
        if n % i == 0 or n % (i + 2) == 0:
            return False
        i += 6
    return True

def testPrime(n, expected):

    result = isPrime(n)
    assert result == expected, f"{n} should be {'prime' if expected else 'not prime'}, but got {result}"

# Test cases
test_cases = [
    (2, True),
    (3, True),
    (4, False),
    (7, True),
    (11, True),
    (15, False),
    (1, True),   #Error testcase
]

for n, expected in test_cases:
    testPrime(n, expected)

if __name__ == "__main__":
    print("All test cases passed!")
