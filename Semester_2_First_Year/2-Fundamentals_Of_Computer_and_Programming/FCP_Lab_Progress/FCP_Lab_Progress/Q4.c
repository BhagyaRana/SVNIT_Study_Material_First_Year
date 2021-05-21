#include<stdio.h>

int main()
 {  
    char c;
	int k;
    printf("Enter A Character : ");
    scanf("%c",&c);
    k = c;
    printf("\nASCII Code : ");
    printf("%d",k);
    if(((k>=65)&&(k<=90))||((k>=97)&&(k<=122)))
    { printf("\n Alphabet");
	}
	else
	 { printf("\n Not a Alphabet");
	 }
 	return 0;
 }
