#include <stdio.h>
void main()
{
    char str[100];
    printf("\nEnter the String : ");
    gets(str);
    char c; //For Swapping
    int length = 0;
    while (str[length] != '\0')
        length++;
    int i, j, n = length;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (str[i] > str[j])
            {
                c = str[i];
                str[i] = str[j];
                str[j] = c;
            }
        }
    }
    printf("\nThe String after Sorting is : %s ", str);
}