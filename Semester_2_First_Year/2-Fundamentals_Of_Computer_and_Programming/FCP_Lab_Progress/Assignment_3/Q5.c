#include<stdio.h>
void main()
{
	float amt,mc=0,hi=0,bill;
	printf("Enter Mill Clothes amount : ");
	scanf("%f",&mc);
	printf("\nEnter Handloom Item amount : ");
	scanf("%f",&hi);
	float pa = mc+hi;
	if(pa<=100)
	 {
	 	bill = mc  + (0.95)*hi;
	 }
	else 
	 {
	 	if(pa<=200)
	 	 {
	 	 	bill = (0.95)*mc  + (0.925)*hi;
		  }
		else
		 {
		 	if(pa<=300)
		 	 {
		 	 	bill = (0.925)*mc  + (0.90)*hi;
			  }
			else
			 {
			 	bill = (0.90)*mc  + (0.85)*hi;
			 }  
		 }  
	  } 
	  
	printf("\n Bill Amount : %f",bill);
	
}
