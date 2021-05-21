#include <stdio.h>

void main()
{
    int a = 0, b = 0;
    printf("\nEnter Number 1 : ");
    scanf("%d", &a);
    printf("\nEnter Number 2 : ");
    scanf("%d", &b);

    printf("\nBefore Swapping : \n");
    printf("\n Number 1 : %d ", a);
    printf("\n Number 2 : %d ", b);
    
    int *add_a, *add_b;
    int temp;

    add_a = &a;
    add_b = &b;

    temp = *add_a;
    *add_a = *add_b;
    *add_b = temp;

    printf("\nAfter Swapping : \n");
    printf("\n Number 1 : %d ", a);
    printf("\n Number 2 : %d ", b);
}