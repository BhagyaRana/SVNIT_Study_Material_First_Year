#include <stdio.h>
#include <stdlib.h>

void increment(int *v)
{
    (*v)++;
}
void update(int *a, int *b)
{
    //Value of Variable **a
    int val_a = *a;
    int val_b = *b;
    int temp = val_a + val_b;
    int temp2 = abs(val_a - val_b);
    *a = temp;
    *b = temp2;
}
void main()
{
    // int a;
    // scanf("%d", &a);
    // increment(&a);
    // printf("%d", a);
    int num1, num2;
    printf("\nEnter Number 1 : ");
    scanf("%d", &num1);
    printf("\nEnter Number 2 : ");
    scanf("%d", &num2);
    update(&num1, &num2);
    printf("\nThe Update Values of Number 1 and Number 2 are :\n");
    printf("\t Number 1 : %d \n", num1);
    printf("\t Number 2 : %d \n", num2);
}