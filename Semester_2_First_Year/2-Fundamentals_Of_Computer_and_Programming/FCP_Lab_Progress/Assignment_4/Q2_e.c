#include <stdio.h>

void main()
{
    int row;
    int n, i = 1, num;
    printf("Enter the Max Number in Vertical Pyramid : ");
    scanf("%d", &n);
    for (row = 1; row <= n - 1; row++)
    {
        num = row;
        for (i = 1; i <= num; i++)
            printf("%d ", i);
        printf("\n");
    }
    for (row = 1; row <= n; row++)
    {
        num = n - row + 1;
        for (i = 1; i <= num; i++)
            printf("%d ", i);
        printf("\n");
    }
}
