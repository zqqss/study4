#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int x = 0;
	scanf("%d", &x);
	int i = 0;
	if (x % 2 == 0)
	{
		i++;
	}
	if (4 < x && x < 13)
	{
		i++;
	}
	if (i == 2)
	{
		printf("1 1 0 0");
	}
	if (i == 1)
	{
		printf("0 1 1 0");
	}
	if (i == 0)
	{
		printf("0 0 0 1");
	}
	return 0;
}