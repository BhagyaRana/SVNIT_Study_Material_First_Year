#include <stdio.h>

void main()
{
    int Integer;
    int *Pointer; /*Create Pointer */
    Pointer = &Integer; /*Initialise and Assign Pointer*/
    Integer = 250;      
    printf("Using variable 'Integer' :\n");
    printf("Value of Integer : %d \nAddress of Integer : %u\n", Integer, &Integer);
    // Access Pointer Variable
    printf("Using pointer 'Pointer' :\n");
    printf("Value of Pointer : %d\nAddress of Pointer : %u\n", *Pointer, Pointer);
    // *Pointer is Dereferencing
}