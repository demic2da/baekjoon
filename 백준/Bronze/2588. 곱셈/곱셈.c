#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b;
	int i, j, k;
	scanf("%d %d", &a, &b);

	i = b % 10;
	j = (b / 10) % 10;
	k = (b / 10) / 10;

	printf("%d\n", i*a);
	printf("%d\n", j*a);
	printf("%d\n", k*a);
	printf("%d", a*b);
}