#include <stdio.h>
#include <conio.h>
#include <string.h>
void insert_str(char str1[100], char str2[100], int p)
{
    int i;
    int l1 = strlen(str1);
    int l2 = strlen(str2);
    // Convert abc|"efg" --> abc|string length|"efg" 
    for (i = p; i < l1; i++)
    {
        str1[i + l2] = str1[i];
    }
    // convert abc|string_length|"efg" --> abc|pqrs|efg
    for (i = 0; i < l2; i++)
    {
        str1[p + i] = str2[i];
    }
    str2[l2 + 1] = '\0'; //null  character at end
    printf("The Final String After inserting is %s", str1);
}

void main()
{
    char str1[100], str2[100];
    int position = 0;
    printf("Enter the string 1\n");
    gets(str1);
    printf("Enter the string 2(to be inserted)\n");
    gets(str2);
    printf("Enter the position where the string is to be inserted\n");
    scanf("%d", &position);
    insert_str(str1,str2,position);
}