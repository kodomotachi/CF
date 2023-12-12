MOD = 998244353

def matrix_mult(A, B):
    # Multiply two matrices modulo MOD
    result = [[0, 0], [0, 0]]
    for i in range(2):
        for j in range(2):
            for k in range(2):
                result[i][j] = (result[i][j] + A[i][k] * B[k][j]) % MOD
    return result

def matrix_power(matrix, power):
    # Calculate matrix to the power modulo MOD
    result = [[1, 0], [0, 1]]
    while power > 0:
        if power % 2 == 1:
            result = matrix_mult(result, matrix)
        matrix = matrix_mult(matrix, matrix)
        power //= 2
    return result

def fibonacci_sum(n, k):
    if n == 1:
        return 1
    M = [[1, 1], [1, 0]]
    M_k_minus_1 = matrix_power(M, k - 1)
    F_k = M_k_minus_1[0][0]
    M_n = matrix_power(M, n)
    F_n_plus_1 = M_n[0][0]
    S = (F_k - F_n_plus_1) % MOD
    return S

n = int(input("Enter n: "))
k = int(input("Enter k: "))
result = fibonacci_sum(n, k)
print("The sum S modulo 998244353 is:", result)
