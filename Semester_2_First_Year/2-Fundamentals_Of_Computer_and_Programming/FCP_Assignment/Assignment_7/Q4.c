#include <stdio.h>
// #include <math.h>
int power(int a, int n)
{
    if (n == 0)
        return 1;
    if (n == 1)
        return a;
    int t = power(a, (n / 2));
    return t * t * power(a, n % 2);
}
int flip(int n, int k)
{
    int edit_part = n % (power(10, k)); //1234
    n = n - edit_part;              //1000
    int rev_edit = 0, remainder = 0;
    while (edit_part != 0)
    {
        remainder = edit_part % 10;
        rev_edit = rev_edit * 10 + remainder;
        edit_part /= 10;
    }
    n = n + rev_edit;
    return n;
}

void main()
{
    int n, k;
    printf("\nEnter a Number : ");
    scanf("%d", &n);
    printf("\nEnter Number of digits to Flip : ");
    scanf("%d", &k);
    int ans = flip(n, k);
    printf("\nThe Number after Flipping is : %d", ans);
}