#include<stdio.h>

void main()
 {
 	int row;
 	int n,i=1,num;
 	printf("Enter the Number of Rows to be Printed : ");
 	scanf("%d",&n);
    for(row=1;row<=n;row++)
	{
       num = n - row + 1;
	   for(i=1;i<=num;i++)
	    printf("%d",i);
       printf("\n");
	}	
}
