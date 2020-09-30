#include <stdio.h>

int A[6] = { 3,4,5,9,1,-4 };

void ShowMassive();
void Swap();
void BulbeSort();

void main()
{
	ShowMassive();
	BulbeSort();
	ShowMassive();
}

void ShowMassive()
{
	int i;
	for (i = 0; i < 6; i++) printf_s("%4i", A[i]);
	printf_s("\n");
}

void Swap(int i, int j)
{
	int Temp;
	Temp = A[i];
	A[i] = A[j];
	A[j] = Temp;
}

void BulbeSort()
{
	int i, j;
	for (i=0;i<6;i++)
	{
		for (j=6-2;j>=0;j--)
		{
			if (A[j + 1] < A[j]) Swap(j+1,j);
		}
	}
}