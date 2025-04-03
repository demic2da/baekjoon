#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define x 100

int a[x];

int main(void)
{
	int m, n, i, b, c, k;
	scanf("%d%d", &n, &m);

	for (i = 0; i < n; i++)
	{
		a[i] = i + 1;
	}

	for (i = 0; i < m; i++)
	{
		scanf("%d%d", &b, &c);

		k = a[b-1];
		a[b-1] = a[c-1];
		a[c-1] = k;
	}

	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
}

