#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	while (true)
	{
		int a = 0, b = 0, temp = 0, counta = 0, countb = 0, countmin = 0, carry = 0;
		int *arra, *arrb;

		scanf("%d %d", &a, &b);
		if ((a == 0) && (b == 0)) break;

		temp = a;
		while (temp != 0)
		{
			temp /= 10;
			counta++;
		}

		temp = b;
		while (temp != 0)
		{
			temp /= 10;
			countb++;
		}

		arra = new int[counta];
		for (int i = 0; i < counta; i++)
		{
			arra[i] = a % 10;
			a /= 10;
		}

		arrb = new int[countb];
		for (int i = 0; i < countb; i++)
		{
			arrb[i] = b % 10;
			b /= 10;
		}

		if (counta > countb) countmin = countb;
		else countmin = counta;

		for (int i = 0; i < countmin; i++)
		{
			arra[i] += arrb[i];
			if (arra[i] >= 10)
			{
				carry++;
				if (i == countmin - 1)
				{
					if (counta > countb)
					{
						if (arra[countmin] == 9)
						{
							carry++;
						}
					}
					else if (counta < countb)
					{
						if (arrb[countmin] == 9)
						{
							carry++;
						}
					}
				}
			}
		}

		printf("%d\n", carry);
		delete[] arra;
		delete[] arrb;
	}

	system("pause");
	return 0;
}