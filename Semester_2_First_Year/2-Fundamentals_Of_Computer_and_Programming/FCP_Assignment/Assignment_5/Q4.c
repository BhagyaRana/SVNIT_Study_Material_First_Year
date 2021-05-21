#include <stdio.h>
int max(int a, int b)
{
    if (a >= b)
        return a;
    else
        return b;
}
int min(int a, int b)
{
    if (a <= b)
        return a;
    else
        return b;
}
void main()
{
    int n, odd = 0, even = 0;
    printf("\nEnter the Size of Input Array(less than 20): ");
    scanf("%d", &n);
    int arr[21] = {0};
    int max1 = 0, min1 = 100000;
    printf("\nEnter the Values of Array(less than 100000) : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        max1 = max(arr[i], max1);
        min1 = min(arr[i], min1);
    }
    printf("\nThe Maximum Value in Array is : %d\n", max1);
    printf("\nThe Minimum Value in Array is : %d\n", min1);
    int min_index = -1, max_index = -1;
    for (int j = 0; j < n; j++)
    {
        if (arr[j] == max1)
            max_index = j;
        else
        {
            if (arr[j] == min1)
                min_index = j;
        }
    }
    int temp = arr[max_index];
    arr[max_index] = arr[min_index];
    arr[min_index] = temp;
    printf("\nArray after Swapping : ");
    for (int k = 0; k < n; ++k)
    {
        printf("%d ", arr[k]);
    }
}