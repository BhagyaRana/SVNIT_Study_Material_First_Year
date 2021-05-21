#include<stdio.h>

int main()
{
	float f;
	printf("Enter a Floating Number : ");
	scanf("%f",&f);
	int k,r;
	k = f;
	r = k%10;
	printf("\n Rightmost digit : %d",r);
	
	return 0;
}
