#include<stdio.h>

int main()
 {  float a,b,c;
    char o;
    printf("\nEnter operator");
    scanf("%c",&o);
    printf("\nEnter Number 1");
    scanf("%d",&a);
    printf("\nEnter Number 2");
    scanf("%d",&b);

    switch(o)
    {
    	case '+' : c = a+b;
		         break;
		         
	    case '-' : c = a-b;
		         break;
		         
	    case '*' : c = a+b;
		         break;
		         
    	case '/' : c = a/b;
		         break;
		
	    case '%' : c = a%b;
		         break;
		default : printf("Wrong Operator!");
	}
	
	printf("Output : %f",&c);
 	return 0;
 }
