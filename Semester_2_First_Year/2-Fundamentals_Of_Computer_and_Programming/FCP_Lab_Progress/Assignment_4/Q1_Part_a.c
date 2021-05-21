#include<stdio.h>

void main()
 {  
    int n;
 	printf("Enter the value of 'n' for Series : ");
 	scanf("%d",&n);
 	int i,sum=1,sign=1;
 	for(i=2;i<=n;i++)
     { 
	    
       sum += sign*(i*i);
       sign *=-1; 
	  } 
	printf("\n Sum of Series : %d",sum);
	  	
 }
