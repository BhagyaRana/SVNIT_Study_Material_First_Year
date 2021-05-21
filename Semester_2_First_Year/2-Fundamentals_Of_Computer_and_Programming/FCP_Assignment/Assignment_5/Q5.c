#include <stdio.h>
void main()
{

    int n;
    printf("\nEnter number of elements in Array : ");
    scanf("%d", &n);
    int arr[100], pos, i;
    printf("\nEnter %d elements of the Array : ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int del_element, flag = 1;
    printf("\nEnter the Element to be deleted : ");
    scanf("%d", &del_element);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == del_element)
        {
            pos = i;
            flag = 0;
        }
    }
    if (flag)
    {
        printf("\nElement to be Deleted Not Found.\n");
        printf("\nFinal Array After element Deletion:");
        for (i = 0; i < n; i++)
            printf("%d ", arr[i]);
    }
    else
    {
        for (i = pos; i < n - 1; i++)
            arr[i] = arr[i + 1];
        printf("\nFinal Array After element Deletion:");
        for (i = 0; i < n - 1; i++)
            printf("%d ", arr[i]);
    }
    printf("\n");
}