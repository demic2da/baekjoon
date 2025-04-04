#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define x 100

int a[x];

int main(void)
{
	int n, m, i, j, k, b, c;

	scanf("%d%d", &n, &m);

	for (i = 0; i < n; i++)
	{
		a[i] = i + 1;
	}


	for (i = 0; i < m; i++)
	{
		scanf("%d%d", &b, &c);

		for (j = 0; j < (c-b+1) / 2; j++)
		{
			k = a[c - 1 - j];
			a[c - 1 - j] = a[b-1+j];
			a[b-1+j] = k;
		}

	}


	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}

}

