#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int q = 0;
	int w = 0;
	scanf("%d", &q);
	if (q > 0 && q < 10)
	{
		printf("0\n");
	}
	else
	{
		w = q / 10;
		printf("%d\n", w % 10);
	}
	return 0;
}