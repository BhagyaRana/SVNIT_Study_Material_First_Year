#include <stdio.h>
#include <math.h>
typedef unsigned long long ull;
// Divide and Conquer Approach a^n = a^(n/2)*a^(n/2)
ull power(ull a, ull n)
{
    if (n == 0)
        return 1;
    if (n == 1)
        return a;
    ull t = power(a, (n / 2));
    return t * t * power(a, n % 2);
}
//For a^3 = (a^1)*(a^1)*(a^(3%2))
//For a^5 = (a^2)*(a^2)*(a^(5%2)) --> recursive call for a^2
//        = ((a*a))*((a*a))*(a^(5%2))
// Method 2 for Small Numbers (Not Effecient)
ull power2(ull base, ull a)
{
    if (a != 0)
        return (base * power(base, a - 1));
    else
        return 1;
}
void main()
{
    ull x, y;
    printf("\nFor Calculating x^y : \n");
    printf("\nEnter a Base Number(x) : ");
    scanf("%llu", &x);
    printf("\nEnter a Exponent Number(y) : ");
    scanf("%llu", &y);
    ull ans = power(x, y);
    printf("\nThe Result of %llu raised to %llu : %llu ", x, y, ans);
    //Built in Function Conflict with Same Name "pow",
    // So changed to "power"
}