#include <stdio.h>
#include <string.h>
void main()
{
    char str[500];
    char Word[500];
    int count;
    printf("Enter any string: ");
    gets(str);
    printf("Enter word to search occurrences: ");
    gets(Word);
    int i, j, found;
    int stringLen = strlen(str); // length of string
    int wordLen = strlen(Word);  // length of word to be searched
    count = 0;
    // abcdefgh = 8 efg = 3 ; loop should run 8-3 times
    for (i = 0; i <= stringLen - wordLen; i++)
    {
        found = 1; //Assuming Word to be Found
        for (j = 0; j < wordLen; j++)
        {
            //Compapring Character by Character
            if (str[i + j] != Word[j])
            {
                found = 0; //The word is not Found
                break;
            }
        }
        if (found == 1)
        {
            count++; //Word Found
        }
    }
    printf("Total occurrences of %s is/are : %d", Word, count);
}
