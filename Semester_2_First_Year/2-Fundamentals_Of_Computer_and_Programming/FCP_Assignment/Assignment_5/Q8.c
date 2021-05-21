#include <stdio.h>
void main()
{
    int a[3][3], b[3][3], c[3][3];
    printf("\nEnter the Elements for First Matrix : \n");
    int i, j, k;
    for (i = 0; i < 3; ++i)
    {
        for (j = 0; j < 3; ++j)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nEnter the Elements for Second Matrix : \n");
    for (i = 0; i < 3; ++i)
    {
        for (j = 0; j < 3; ++j)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    for (i = 0; i < 3; ++i)
    {
        for (j = 0; j < 3; ++j)
        {
            for (k = 0; k < 3; ++k)
            {
                c[i][j] = a[i][k] * b[k][j];
            }
        }
    }

    printf("\nMatrix A : \n");
    for (i = 0; i < 3; ++i)
    {
        for (j = 0; j < 3; ++j)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\nMatrix B : \n");
    for (i = 0; i < 3; ++i)
    {
        for (j = 0; j < 3; ++j)
        {
            printf(" %d ", b[i][j]);
        }
        printf("\n");
    }
    printf("\nFinal Resultant Matrix (After Multiplication) : \n");
    for (i = 0; i < 3; ++i)
    {
        for (j = 0; j < 3; ++j)
        {
            printf(" %d ", c[i][j]);
        }
        printf("\n");
    }
}