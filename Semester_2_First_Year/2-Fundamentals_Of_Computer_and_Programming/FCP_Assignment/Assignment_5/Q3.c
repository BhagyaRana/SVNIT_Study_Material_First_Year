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
    }
    int temp = 0;
    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            if (arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("\nArray after Sorting :");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}