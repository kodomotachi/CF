#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 5;

int sizeA, sizeB = 0;
int arrA[N], arrB[N];
bool isPerfect[N];

void F1(int arrA[], int& sizeA, int arrB[], int& sizeB)
{
	cout << "sizeA: ";
	cin >> sizeA;
	cout << "arrA: ";
	for (int i = 0; i < sizeA; i++)
	{
		cin >> arrA[i];
		int tmp = 0;
		for (int j = 1; j <= arrA[i] / 2; j++)
			if (arrA[i] % j == 0)
				tmp += j;
		if (tmp == arrA[i])
			arrB[sizeB++] = arrA[i];
	}
	int cnt = 0;
	for (int i = 0; i < sizeB; i++)
		if (isPerfect[arrB[i]] == false)
			cnt++, isPerfect[arrB[i]] = true;
	sizeB = cnt;
}

void F2(int arrB[], int sizeB)
{
	cout << "sizeB: " << sizeB << "\narrB: ";
	for (int i = 2; i <= N; i++)
		if (isPerfect[i] == true)
			cout << i << " ";
}

int main()
{
	F1(arrA, sizeA, arrB, sizeB);
	F2(arrB, sizeB);
	return 0;
}