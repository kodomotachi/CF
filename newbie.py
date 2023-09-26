from math import sqrt


def combination(x):
    return (x - 1) * x / 2


def main():
    t = int(input())  # Number of test cases

    for _ in range(t):
        n = int(input())  # Size of the initial array
        delta = sqrt(1 + 4 * 2 * n)
        ans = round(((1 + (delta))) / 2)
        print(ans + (n - combination(ans)))


if __name__ == "__main__":
    main()
