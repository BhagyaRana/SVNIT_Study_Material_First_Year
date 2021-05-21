#include <stdio.h>
void main()
{
    //Accept 4 Digit Positive Integers
    int n1, n2, r1, r2, ans = 0;
    printf("\nEnter n1 : ");
    scanf("%d", &n1);
    printf("\nEnter n2 : ");
    scanf("%d", &n2);
    printf("\n");
    int k = n1;
    int l = n2;
    while (k || l)
    {
        r1 = k % 10;
        r2 = l % 10;
        ans += r1 * r2;
        // k -= r1;
        // l -= r2;
        k /= 10;
        l /= 10;
    }
    printf("Output : %d", ans);
}