#include<stdio.h>

int main()
 {  int n1,n2,temp;
    printf("Enter Number 1 :");
	scanf("%d",&n1);
	printf("Enter Number 2 :");
	scanf("%d",&n2);
	temp = n1;
	n1 = n2;
	n2 = temp;
	
	//   Without Use Of Temp Variable 
	//   n1 = n1 + n2;
	//  n2 = n1 - n2;
    //  n1 = n1 - n2;
	   
	printf("\nThe Number1 and Number2 after swaping is %d and %d",n1,n2);
	 
 	return 0;
 }
