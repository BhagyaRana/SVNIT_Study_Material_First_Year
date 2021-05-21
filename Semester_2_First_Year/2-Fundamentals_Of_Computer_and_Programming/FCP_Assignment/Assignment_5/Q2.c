#include <stdio.h>
void main()
{
    int n, odd = 0, even = 0;
    printf("\nEnter the Size of Input Array(less than 20): ");
    scanf("%d", &n);
    int arr[21] = {0};
    printf("\nEnter the Values of Array : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] & 1)
            odd += 1;
        else
            even += 1;
    }
    printf("\nThe Even Numbers in Input Array are : %d\n", even);
    printf("\nThe Odd Numbers in Input Array are : %d\n", odd);
}