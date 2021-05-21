#include<stdio.h>

void main()
 {
 	int fact =1,i,sum=0,d,n;
 	printf("Enter A Number : ");
 	scanf("%d",&n);
 	int k=n;
 	while(n)
	{
	 d = n%10;
	 n = n/10;
	 for(i=1;i<=d;i++)
	  {
	  	fact = fact * i;
	  }
	 sum += fact;
	 fact=1;
	}
	if(sum==k)
	 {
	 	printf("\n %d is Strong Number",k);
	 }
	else
	 {
	 	printf("\n %d is Not an Strong Number",k);
	 } 
 }
