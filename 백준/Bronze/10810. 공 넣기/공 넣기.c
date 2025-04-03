#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define x 100

int a[x];

int main(void)
{
	int m, n;
	int i, j;
	int d, e, f;
	
	scanf("%d%d", &n, &m);

	for (i = 0; i < m; i++)
	{
		scanf("%d%d%d", &d, &e, &f);

		for (j = d-1; j < e; j++)
		{
			a[j] = f;
		}

	}

	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	
}

