#include<stdio.h>

void main()
{
	float a,b,c,d,k,x,fx;
	printf("Enter the 'a' Coefficient in Polynomial : ");
	scanf("%f",&a);
	printf("\nEnter the 'b' Coefficient in Polynomial : ");
	scanf("%f",&b);
	printf("\nEnter the 'c' Coefficient in Polynomial : ");
	scanf("%f",&c);
	printf("\nEnter the 'd' Coefficient in Polynomial : ");
	scanf("%f",&d);
	printf("Enter the value of k : ");
	scanf("%f",&k);
	printf("Enter the value of x : ");
	scanf("%f",&x);
	if(x==k)
	 {  
	    fx = 0;
	 	printf("The value of F(x) : %f",&fx);
	 }
	else
	 {
	 	if(x>k)
	 	 {
	 	 	 fx = (a*x*x*x)-(b*x*x)+(c*x)-d;
	       	 printf("The value of F(x) : %f",&fx);
		  }
		else
		 {
		 	 fx = -(a*x*x*x)+(b*x*x)-(c*x)+d;
	       	 printf("The value of F(x) : %f",&fx);
		   }  
	 }
	 
}
