#include <stdio.h>
int max(int a, int b)
{
    if (a >= b)
        return a;
    else
        return b;
}
void main()
{
    int n, m;
    printf("\nEnter the Size of Two Input Arrays(less than 20)(size1 and size2) : ");
    scanf("%d %d", &n, &m);
    int arr1[21] = {0};
    int arr2[21] = {0};
    int arr3[21] = {0};
    printf("\nEnter the Input for First Array : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("\nEnter the Input for Second Array : ");
    for (int j = 0; j < n; j++)
    {
        scanf("%d", &arr2[j]);
    }
    int sum = 0;
    for (int k = 0; k < max(n, m); ++k)
    {
        arr3[k] = arr1[k] + arr2[k];
        sum += arr3[k];
    }
    int avg = sum / (max(n, m));
    printf("\nThe Final Array is : ");
    for (int i = 0; i < max(n, m); ++i)
    {
        printf("%d ", arr3[i]);
    }
    printf("\n\nAverage : %d\n", avg);
}