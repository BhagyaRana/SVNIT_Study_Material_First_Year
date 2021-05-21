#include<stdio.h>

void main()
 {
 	int n,d,sum = 0;
 	printf("Enter a Number (3 Digit) : ");
 	scanf("%d",&n);
 	int k=n;
    while(n)
	{
	 d = n%10;
	 n = n/10;
	 sum += (d*d*d);
	}
	if(sum==k)
	 {
	 	printf("\n %d is Armstrong Number",k);
	 }
	else
	 {
	 	printf("\n %d is Not an Armstrong Number",k);
	 } 

	
	
	 	
 }
