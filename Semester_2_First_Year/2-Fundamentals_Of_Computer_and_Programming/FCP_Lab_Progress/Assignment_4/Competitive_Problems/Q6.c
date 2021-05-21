#include <stdio.h>
void main()
{
    int l, r, val, max = 0; //L<=R
    printf("\nEnter Lower Number L : ");
    scanf("%d", &l);
    printf("\nEnter Higher Number R : ");
    scanf("%d", &r);
    printf("\n");
    int k;
    int mval = ((r - l) * (r - l)) / 4;
    // L<=K<=R
    // All Digits Of K are Distinct
    // Value of Expression (L-K)*(K-R) is maximum
    // Multiple Answers chose Larger Value of K
    for (k = l; k <= r; k++)
    {
        int num = k;
        int visit[10] = {0};

        while (num)
        {
            if (visit[num % 10])
                break;
            visit[num % 10] = 1;
            num = num / 10;
        }
        //This Loop Breaks Only if Number id Unique
        if (num == 0)
        {
            val = (l - k) * (k - r);
            if (val >= mval)
                mval = val;
            // max value returned
        }
        if (val == mval)
        {
            printf("%d ", k);
            if (k > max)
                max = k;
        }
        //Multiple Answer Exist Case
    }
    printf("\n\nThe Desired Value of K under Given Constrains : %d", max);
}