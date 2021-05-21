// Reference : https://www.geeksforgeeks.org/write-a-c-program-to-print-all-permutations-of-a-given-string/

#include <stdio.h>
#include <string.h>

//  A string of length n has n! permutation

// Pointers Used Only for Swapping
void swap(char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void permute(char *a, int l, int r)
{
    int i;
    if (l == r)
        printf("%s\n", a);
    else
    {
        for (i = l; i <= r; i++)
        {
            swap((a + l), (a + i));
            permute(a, l + 1, r);
            swap((a + l), (a + i)); //backtrack
        }
    }
}

void main()
{
    char str[20]; //Since Time Complexity is O(N*(N!))
    printf("Enter A String(size<20) : ");
    scanf("%s", &str);
    int len = strlen(str);
    printf("\nThe Permutations of String are : \n");
    permute(str, 0, len - 1);
}