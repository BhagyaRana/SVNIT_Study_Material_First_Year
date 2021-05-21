#include<stdio.h>

void main()
{
	int m;

	printf("Enter the Marks Of Student : ");
	scanf("%d",&m);
	if((m>0)&&(m<35))
	 {
	   printf("Grade : Fail");
	 }
	else
	 {
	 	if(m<60)
	 	 printf("Grade : Second Class");
	 	else
		  if(m<80)
		   printf("Grade : First Class");
		  else
		   printf("Grade : Distinction");  
	  } 
}
