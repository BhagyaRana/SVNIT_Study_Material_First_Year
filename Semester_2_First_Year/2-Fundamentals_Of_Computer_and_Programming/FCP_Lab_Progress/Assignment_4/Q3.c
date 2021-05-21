#include <stdio.h>
void main()
{
    //Accept 2 Positive Numbers
    int n1, n2, count = 0;
    printf("\nEnter n1(Greater Number) : ");
    scanf("%d", &n1);
    printf("\nEnter n2 : ");
    scanf("%d", &n2);
    printf("\n");
    //Assume n1>n2
    int i;
    for (i = n2; i <= n1;)
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
            count += 1;
            i += 2;
        }
        else
        {
            i += 1;
        }
    }
    printf("\nThe Number of Even Numbers between %d and %d = %d", n1, n2, count);
}