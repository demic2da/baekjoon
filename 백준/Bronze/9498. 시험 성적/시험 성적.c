#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, n;
	scanf("%d", &a);
	n = a / 10;

	
	if (n >= 9)
	{
		printf("A");
	}
	else if (n >= 8)
	{
		printf("B");
	}
	else if (n >= 7)
	{
		printf("C");
	}
	else if (n >= 6)
	{
		printf("D");
	}
	else {
		printf("F");
	}

}