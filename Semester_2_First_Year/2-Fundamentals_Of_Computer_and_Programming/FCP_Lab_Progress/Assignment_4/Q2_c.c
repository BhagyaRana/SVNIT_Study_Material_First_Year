#include <stdio.h>

void main()
{
	int row, space, star, n, i = 1;
	printf("Enter the Number of Rows to be Printed : ");
	scanf("%d", &n);
	for (row = 1; row <= n; row++)
	{

		for (star = 1; star <= row; star++)
		{
			printf("%d ", i * i);
			i--;
		}
		i = 1;
		i += row;
		printf("\n");
	}
}
