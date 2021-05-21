#include <stdio.h>
int Ispalindrome(int n)
{
    int k = n;
    // Single Digit Number
    if (n / 10 == 0)
        return 1;
    // Find Reverse Number
    int rev_num = 0;
    while (k > 0)
    {
        rev_num = rev_num * 10 + k % 10;
        k = k / 10;
    }
    if (rev_num == n)
        return 1;
    else
        return 0;
}

void main()
{
    int n;
    printf("\nEnter number of elements in Array : ");
    scanf("%d", &n);
    int arr[100], i;
    printf("\nEnter %d elements of the Array : ", n);
    int palin_count = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        palin_count += Ispalindrome(arr[i]);
    }
    printf("\nThe Total Number of Palindromic Numbers in Array are : %d", palin_count);
}
