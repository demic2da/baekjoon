#include <stdio.h>

int main(void)
{
	int a, b;
	double c;
	scanf("%d%d", &a, &b);
	c = (double)a / (double)b;
	printf("%.11f\n", c);

	return 0;

}