#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int run = 0, length = 0;
	int *numbers;

	scanf("%d", &run);
	for (int i = 0; i < run; i++)
	{
		scanf("%d", &length);
		numbers = new int[length];
		for (int k = 0; k < length; k++)
			scanf("%d", &numbers[k]);

		for (int k = 0; k < length; k++)
		{
			for (int n = k + 1; n < length; n++)
			{
				if (numbers[k] < numbers[n])
				{
					int temp = numbers[k];
					numbers[k] = numbers[n];
					numbers[n] = temp;
				}
			}
		}

		printf("%d\n", numbers[length / 2]);
		delete[] numbers;
	}

	system("pause");
	return 0;
}