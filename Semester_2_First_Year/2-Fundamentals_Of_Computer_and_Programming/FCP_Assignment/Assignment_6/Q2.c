#include <stdio.h>
void main()
{
    char str1[100];
    printf("\nEnter String 1 : ");
    // S(83) + u(117) + cc(2*99) + e(101) + ss(2*115) = 729
    gets(str1);
    int i, ascii = 0;
    for (i = 0; str1[i] != '\0'; ++i)
    {
        ascii += str1[i];
    }
    printf("\nThe ASCII Value of String 1 is : %d ", ascii);
    printf("\n");
}