#include<stdio.h>

int main()
 {  int i;
    for(i=70;i<=100;i++)
    {
    	if((i%6==0)&&(i%4!=0))
    	 printf("%d \t",i);
	}
 	return 0;
 }
