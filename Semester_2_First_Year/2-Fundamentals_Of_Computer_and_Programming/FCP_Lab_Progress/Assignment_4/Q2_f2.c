#include <stdio.h>
void main()
{

    int row;
    int space, star;
    int n;
    char ch = 'A'; // Very Important Life Changing MISTAKE char ch = "A"!!
    printf("Enter the width of the Diamond : ");
    scanf("%d", &n); //n=9
    for (row = 1; row <= n; row += 2)
    {
        for (space = 1; space <= n - row; space++)
            printf(" ");
        for (star = 1; star <= row; star++)
        {
            // printf("* ");
            printf("%c ", ch);
            ch += 2;
        }
        ch = 'A';
        printf("\n");
    }
    n = n - 2;
    for (row = n; row >= 1; row -= 2)
    {
        for (space = 1; space <= n - row + 2; space++)
            printf(" ");
        for (star = 1; star <= row; star++)
        {
            // printf("* ");
            printf("%c ", ch);
            ch += 2;
        }
        ch = 'A';
        printf("\n");
    }
}