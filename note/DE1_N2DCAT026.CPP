// DE 1
// N22DCAT026
// Tran Quoc Huy

#include <bits/stdc++.h>
using namespace std;

const int N = 5e6 + 5;

int sizeA, sizeB = 0;
int arrA[N], arrB[N];
bool isPrime[N];

void F1(int arrA[], int& sizeA, int arrB[], int& sizeB)
{
	cout << "sizeA: ";
	cin >> sizeA;
	cout << "arrA: ";
	for (int i = 0; i < sizeA; i++)
	{
		int bit = 0;
		cin >> arrA[i];
		if (arrA[i] < 2)
			continue;
		for (int j = 2; j <= sqrt(arrA[i]); j++)
		{
			if (arrA[i] % j == 0)
				bit = 1;
		}			
		if (bit == 0)
			arrB[sizeB++] = arrA[i];
	}
	for (int i = 0; i < sizeB - 1; i++)
		for (int j = i + 1; j < sizeB; j++)
		{
			if (arrB[i] > arrB[j])
			{
				int tmp = arrB[i];
				arrB[i] = arrB[j];
				arrB[j] = tmp;
			}
		}
	int cnt = 0;
	for (int i= 0; i < sizeB; i++)
		if (isPrime[arrB[i]] == false)
			++cnt, isPrime[arrB[i]] = true;
	sizeB = cnt;
	cnt = 0;
	for (int i = 2; i <= N, cnt < sizeB; i++)
		if (isPrime[i])
			arrB[cnt++] = i;
}

void F2(int arrB[], int sizeB)
{
	cout << "sizeB: " << sizeB << "\narrB: ";
	for (int i = 0; i < sizeB; i++)
		cout << arrB[i] << " ";
}

int main()
{
	F1(arrA, sizeA, arrB, sizeB);
	F2(arrB, sizeB);
	return 0;
}