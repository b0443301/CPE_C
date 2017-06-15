#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int first = 0, second = 0;
	while (scanf("%d", &first) != EOF)
	{
		scanf("%d", &second);
		printf("%d\n", second - first);
	}

	return 0;
}