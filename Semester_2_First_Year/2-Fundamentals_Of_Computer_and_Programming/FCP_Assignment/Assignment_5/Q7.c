#include <stdio.h>
void main()
{
    int n;
    printf("\nEnter number of elements in Array : ");
    scanf("%d", &n);
    int arr[100],i;
    printf("\nEnter %d elements of the Array : ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int sum = 0;
    for(int j=0;j<n;j++)
    {
        for(int k=0;k<n;k++)
        {
            sum += arr[j]%arr[k];
        }
    }
    printf("\nOutput : %d",sum%1000000007);
}