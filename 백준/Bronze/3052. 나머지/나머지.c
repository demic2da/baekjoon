#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define x 10

int a[x];

int main(void)
{
	int i, j;
	int count = 10;
	for (i = 0; i < sizeof(a) / sizeof(a[0]); i++)
	{
		scanf("%d", &a[i]);
		a[i] = a[i] % 42;
	}
	for (i = 0; i < x; i++)
	{
		for (j = i + 1; j < x; j++)
		{
			if (a[i] == a[j])
			{
				count--;
				break;
			}
		}
	}

	printf("%d", count);

}

