#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i, n;
	int a, b;
	
	scanf("%d\n", &n);

	for (i = 0; i < n; i++)
	{
		scanf("%d %d", &a, &b);
		printf("%d\n", a + b);
	}

}

