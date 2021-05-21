#include <stdio.h>
const int max = 100;
void main_sum(int mat[][max], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                sum += mat[i][j];
        }
    }
    printf("\n The Sum of Main Diagonal : %d", sum);
}

void main()
{
    int n;
    int mat[max][max];
    printf("\nEnter the n for (n*n) matrix (n<100) : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("matrix[%d][%d] = ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
    printf("\nThe Input Matrix :\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    main_sum(mat, n); // Function Call
}