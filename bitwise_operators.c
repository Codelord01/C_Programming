#include<stdio.h>
/**
 * main - This is the main function
 * return - Returns an integer 0
**/
int main(void)
{
	int a = 10, b = 5;
	int c = a & b;
	int d = a | b;
	int e = a ^ b;
	int f = ~ b;
	int g = a >> b;
	int h = a << b;

	printf("%d\n", c);
	printf("%d\n", d);
	printf("%d\n", e);
	printf("%d\n", f);
	printf("%d\n", g);
	printf("%d\n", h);
	return (0);
}
