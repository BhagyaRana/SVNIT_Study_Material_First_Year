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
    int ins_element;
    printf("\nEnter the Element to be Inserted : ");
    scanf("%d", &ins_element);
    printf("\nEnter the Position of Element : ");
    scanf("%d", &pos);

    for (i = n; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = ins_element;
    printf("\nFinal Array After element Deletion:");
    for (i = 0; i < n + 1; i++)
        printf("%d ", arr[i]);
    printf("\n");
}