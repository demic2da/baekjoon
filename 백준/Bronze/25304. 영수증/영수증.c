#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i, n, x, a, b;
	int c = 0;
	
	scanf("%d\n", &x);
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		scanf("%d%d", &a, &b);
		c += a * b;
	}
	
	if (c == x)
	{
		printf("Yes");
	}
	else printf("No");
	
}

