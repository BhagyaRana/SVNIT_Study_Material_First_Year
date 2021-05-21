#include<stdio.h>

void main()
 {  
    float x,sum=0,fact=1;
	float n;
    printf("Enter the value of 'x' for Series : ");
 	scanf("%f",&x);
 	printf("Enter the value of 'n' for Series(Odd Expected) : ");
 	scanf("%f",&n);
 	float i,sign=1,j,l;
 	float powx = 1;
 	
 	for(i=1;i<=n;i+=2)
     { 
		for(j=1;j<=i;j++)
		  {
		  	powx *= x;
		  }
	    fact = 1;
	    for(l=1;l<=i;l++)
	     {
	     	fact *= l;
		 }
	   
	    sum += ((sign*(powx))/fact);
        sign *= -1; 
	  } 
	printf("\n Sum of Series : %f",sum);
	  	
 }
 
 //i =2 to n;i+=2
 //  ans += ans *(-1.0) * ((x*x)/(i*(i+1)));
