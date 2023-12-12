from math import gcd


def sum_of_all_common_divisors(A):
    mod = 10**9 + 7
    n = len(A)

    # Calculate the GCD of all elements in A
    total_gcd = A[0]
    for i in range(1, n):
        total_gcd = gcd(total_gcd, A[i])

    # Calculate the sum of GCDs of all non-empty subsets using inclusion-exclusion
    result = 0
    for i in range(1, 1 << n):
        subset_gcd = A[0]
        for j in range(n):
            if (i >> j) & 1:
                subset_gcd = gcd(subset_gcd, A[j])
        result += subset_gcd

    # Subtract the GCD of the entire sequence and take the remainder
    result = (result - total_gcd) % mod

    return result


# Example usage
jls_extract_var = [1, 2, 3]
A = jls_extract_var
print(sum_of_all_common_divisors(A))  # Output: 8
