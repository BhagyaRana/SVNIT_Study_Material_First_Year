#include <stdio.h>

void main()
{
    int var1 = 99;
    int *ptr = &var1;
    //Initialize the pointer with the variable's address
	printf("\nValue of Variable : %d\n", var1);
	printf("\nValue of Variable(using pointer) : %d\n", *ptr); //Dereferencing
	//updating the value
	*ptr = 100;
	printf("\nValue of Variable : %d\n", var1);
	printf("\nvalue of Variable(using pointer) : %d\n", *ptr);
}