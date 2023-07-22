from math import sqrt


def solve():
	n, c = [int(x) for x in input().split()]

	arr = list(map(int, input().split()))

	sum_a = 0
	sum_b = 0
	sum_c = 0
	for i in arr:
		sum_a += 4
		sum_b += i * 4
		sum_c += i * i
	
	sum_c -= c
	print(round((-sum_b + sqrt(sum_b * sum_b - 4 * sum_a * sum_c)) / (2 * sum_a)))


t = int(input())

for i in range(t):
	solve()