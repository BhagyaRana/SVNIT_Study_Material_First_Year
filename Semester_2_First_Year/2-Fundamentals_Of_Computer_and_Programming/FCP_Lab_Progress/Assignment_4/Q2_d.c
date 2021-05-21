#include <stdio.h>

void main()
{
	int row;
	int n, i1, j1, j2, s1, k1;
	printf("Enter the Number of Rows to be Printed : ");
	scanf("%d", &n);
	for (row = 1; row <= n; row++)
	{
		i1 = row;
		for (j1 = 1; j1 <= i1; j1++)
		{
			printf("%d", j1);
		}
		s1 = (n - row) * 2;
		for (k1 = 1; k1 <= s1; k1++)
		{
			printf(" ");
		}
		j2 = j1 - 1;
		for (; j2 >= 1; j2--)
		{
			printf("%d", j2);
		}
		printf("\n");
	}
}
