#include <stdio.h>
#include <string.h>
void main()
{
    char str1[100], str2[100];
    printf("\nEnter String 1 : ");
    gets(str1);
    printf("Enter String 2 : ");
    gets(str2);
    fflush(stdin);
    int len_s1 = strlen(str1);
    int len_s2 = strlen(str2);
    int len = len_s1 + len_s2;
    char str[len];
    int i = 0, j = 0, k = 0;
    while (i < len_s1 && j < len_s2)
    {
        //Alernate Charater Assignment till end of smaller String
        str[k++] = str1[i++]; //Post Increment
        str[k++] = str2[j++];
    }
    // Appending Remaining String to Final String
    while (i < len_s1)
    {
        str[k++] = str1[i++];
    }
    while (j < len_s2)
    {
        str[k++] = str2[j++];
    }
    str[k] = ' ';//To Remove Garbage Last Character 
    printf("\nThe String after Merging is : %s", str);
}