#include <stdio.h>

void my_strcpy()
{
    // Copy String Without Using strcpy()
    char str1[100], str2[100];
    printf("\nEnter String 1: ");
    gets(str1);
    int i;
    for (i = 0; str1[i] != '\0'; ++i)
    {
        str2[i] = str1[i];
    }
    str2[i] = '\0'; //Assigning last Null Charater to String 2
    printf("The Copied String 2 is : %s ", str2);
}
void my_strcmp()
{
    // Compare String Without Using strcmp()
    char str1[100], str2[100];
    printf("\nEnter String 1 : ");
    gets(str1);
    printf("Enter String 2 : ");
    gets(str2);
    int i = 0;
    // strcmp() -> 0(Equal) -> ">0"(str1 greater) -> "<0"(str2 greater)
    // Checking Character by Character till end of str 1 or str 2
    while (str1[i] == str2[i] && str1[i] != '\0' && str2[i] != '\0')
        i++;
    // Comparing the Different Letter(Lexicographically)
    if (str1[i] > str2[i])
        printf("String 1 is Lexicographically Greater : str1 > str2");
    else
    {
        if (str1[i] < str2[i])
            printf("String 2 is Lexicographically Greater : str1 < str2");
        else
            printf("Both Strings are Equal : str1 = str2 ");
    }
}
void my_strcat()
{
    // Concat String Without Using strcat()
    char str1[100], str2[100];
    printf("\nEnter String 1 : ");
    gets(str1);
    printf("Enter String 2 : ");
    gets(str2);
    int length = 0;
    while (str1[length] != '\0')
        length++;
    int i = length, j;
    //Idea is to add str2 to str1 after calculating its length
    for (j = 0; str2[j] != '\0'; j++)
    {
        str1[i] = str2[j];
        i = i + 1;
    }
    str1[i] = '\0';
    printf("\nThe Concatenated string is : %s", str1);
}
void my_strrev()
{
    // Reverse String Without Using strcpy()
    char str[100];
    char c; //temporary container to swap characters
    printf("\nEnter the string : ");
    gets(str);
    int i = 0;
    int length = 0;
    while (str[length] != '\0')
        length++;
    int j = length - 1;
    while (i < j)
    { //Swap first and last character till middle of string
        c = str[i];
        str[i] = str[j];
        str[j] = c;
        i++;
        j--;
    }
    printf("\nThe Reverse String is : %s", str);
}
void main()
{
    printf("Enter the Option Number from Below :\n\n");
    printf("1: Copy one string into another\n");
    printf("2: Compare two strings\n");
    printf("3: Concat two strings\n");
    printf("4: Reverse a given string\n");
    char yesorno = 'y';
    while (yesorno == 'Y' || yesorno == 'y')
    {
        printf("\nEnter the choice : ");
        int option;
        scanf("%d", &option);
        fflush(stdin);
        switch (option)
        {
        case 1:
            my_strcpy();
            break;
        case 2:
            my_strcmp();
            break;
        case 3:
            my_strcat();
            break;
        case 4:
            my_strrev();
            break;
        default:
            printf("Wrong Option Entered");
        }
        printf("\nWant to Enter Choice Again(Enter Y for Yes or N for No) : ");
        scanf("%c", &yesorno);
    }
}