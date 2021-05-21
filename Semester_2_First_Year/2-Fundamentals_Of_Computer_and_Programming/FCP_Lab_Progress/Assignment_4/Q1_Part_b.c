#include<stdio.h>

void main()
 {  
    int n;
 	printf("Enter the value of 'n' for Series : ");
 	scanf("%d",&n);
 	int i,sum=0;
 	for(i=1;i<=n;i++)
     { 
	    
       sum += (i*i);
       
	  } 
	printf("\n Sum of Series : %d",sum);
	  	
 }
