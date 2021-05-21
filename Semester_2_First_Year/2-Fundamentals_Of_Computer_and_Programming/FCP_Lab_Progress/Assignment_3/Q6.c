#include<stdio.h>

void main()
{
	float pa,c=0;
	printf("Enter the Policy Amount of Insurance Sold : ");
	scanf("%f",&pa);
	if(pa<=10000)
	{
		c= (0.5*pa)/100;
	}
	else
	 {
	 	if((pa>=10000)&&(pa<=25000))
	 	 { c = 50 + ((0.6*(pa-10000))/100);
		  }
		else
		 {
		 	c = 140 + ((0.75*(pa-25000))/100);
		   }  
	 }
	printf("\nYour Commision is : %f",c); 
}
