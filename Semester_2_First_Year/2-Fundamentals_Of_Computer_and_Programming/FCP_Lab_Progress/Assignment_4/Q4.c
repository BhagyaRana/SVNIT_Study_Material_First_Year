#include <stdio.h>
void main()
{
    int n, r, sum = 0;
    printf("Enter a Number : ");
    scanf("%d", &n);
    int k = n;
    while (k)
    {
        r = k % 10;
        sum += (r * r);
        k -= r;
        k /= 10;
    }
    printf("The Sum Of Square Of Each Digit is : %d ", sum);
}