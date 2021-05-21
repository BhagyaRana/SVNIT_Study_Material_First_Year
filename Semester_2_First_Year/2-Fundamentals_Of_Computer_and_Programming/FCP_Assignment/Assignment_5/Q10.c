#include <stdio.h>

void mergeArrays(int arr1[], int arr2[], int n1, int n2, int arr3[])
{
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2) //Array Traversal
    {
        //The Smaller of two gets Stored in arr3
        if (arr1[i] < arr2[j])
            arr3[k++] = arr1[i++];
        else
            arr3[k++] = arr2[j++];
    }
    while (i < n1) // Store remaining elements of first array
        arr3[k++] = arr1[i++];
    while (j < n2) // Store remaining elements of second array
        arr3[k++] = arr2[j++];
}
void main()
{
    int n, m;
    printf("\nEnter number of elements in Array 1 : ");
    scanf("%d", &n);
    int arr1[100];
    printf("\nEnter %d elements of the Array 1 : ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr1[i]);
    printf("\nEnter number of elements in Array 2 : ");
    scanf("%d", &m);
    int arr2[100];
    printf("\nEnter %d elements of the Array 2 : ", m);
    for (int i = 0; i < m; i++)
        scanf("%d", &arr2[i]);
    int arr3[n + m];
    mergeArrays(arr1, arr2, n, m, arr3);
    printf("\nThe Array after Merging is : \n");
    for (int j = 0; j < n + m; j++)
        printf("%d ", arr3[j]);
}
