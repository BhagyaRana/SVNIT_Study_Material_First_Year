#include<stdio.h>

int main()
 {  int n,sum=0;
    //int prod=1,r;
    printf("Enter A Number to Check if its Perfect : ");
    scanf("%d",&n);
    /*while(n>0)
     {
     	r = n%10;
		n -= r;
		n /= 10;
		sum += r;
		prod *= r; 
	 }
	 if(sum == prod)
	 { printf("\n Perfect Number");
	 }
	 else
	 { printf("\n Perfect Number");
	 }
	*/
	int i;
	for( i=1;i<n;i++)
	 {
	 	if(n%i==0)
	 	 {
	 	 	sum += i;
		  }
	  } 
	 if(sum==n)
	  { printf("\n Perfect Number");
	 } 
	 else
	 { printf("\n Not a Perfect Number");
	 }
 	return 0;
 }
