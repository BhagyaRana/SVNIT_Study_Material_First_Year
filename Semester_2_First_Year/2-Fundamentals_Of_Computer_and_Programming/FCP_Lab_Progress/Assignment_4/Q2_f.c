#include <stdio.h>
// Real Answer -> Refer Q2_f2.c
void main()
{
    // char ch = "A";
    // int ascii = ch;
    // printf("%d", ascii);
    int row;
    int space, star;
    int n;
    printf("Enter the width of the Diamond : ");
    scanf("%d", &n); //n=9
    for (row = 1; row <= n; row += 2)
    {
        for (space = 1; space <= n - row; space++)
            printf(" ");
        for (star = 1; star <= row; star++)
            printf("* ");

        printf("\n");
    }
    n = n - 2;
    for (row = n; row >= 1; row -= 2)
    {
        for (space = 1; space <= n - row + 2; space++)
            printf(" ");
        for (star = 1; star <= row; star++)
            printf("* ");

        printf("\n");
    }
}