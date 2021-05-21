#include<stdio.h>

int main()
 {  int yr;
    printf("Enter Year(1582 onwards) : ");
    scanf("%d",&yr);
    if(yr>1582)
	{
	if(yr%4==0)
     {
     	if(yr%100==0)
     	 {	
		 	if(yr%400==0)
		 	{ printf("\n Leap Year !!");
			 }
			else
			 {
			 	printf("\n Not a Leap Year !!");
			  } 
	     }
	    else
		 {
		 	printf("\n Leap Year!!");
		  } 
	 }
	else
	 {
	 	printf("\nNot a Leap Year!!");
	  } 
    }
    else
     {
     	printf("Enter A Year Greater than 1582!!");
	 }
 	return 0;
 }
