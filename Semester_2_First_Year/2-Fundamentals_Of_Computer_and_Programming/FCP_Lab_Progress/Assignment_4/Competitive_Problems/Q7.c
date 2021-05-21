#include <stdio.h>
void main()
{
    int A, B, C, a, b, c, count = 0;
    printf("\nEnter A : ");
    scanf("%d", &A);
    printf("\nEnter B : ");
    scanf("%d", &B);
    printf("\nEnter C : ");
    scanf("%d", &C);
    for (int a = 1; a <= A; a++)
    {
        for (int b = 1; b <= B; b++)
        {
            for (int c = 1; c <= C; c++)
            {
                if ((a * c) > (b * b))
                {
                    count++;
                    printf("\nValid Triplet : %d , %d , %d ", a, b, c);
                }
            }
        }
    }
    printf("\nThe Total Number of Valid Triplets are : %d", count);
}