#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define x 1000000

int a[x];


int main(void)
{
	int n, i, k;
	int max, min;
	

	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}

	min = a[0];
	max = a[0];

	for (i = 0; i < n; i++)
	{
		if (max < a[i])
		{
			max = a[i];
		}
		if (min > a[i])
		{
			min = a[i];
		}
	}

	printf("%d %d", min, max);


	return 0;
}

