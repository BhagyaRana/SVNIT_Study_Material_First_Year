#include<stdio.h>

void main()
{ 
 //Part 1 
 float a,b;
 printf("Enter The First Number : ");
 scanf("%f",&a);
 printf("\nEnter The Second Number : ");
 scanf("%f",&b);
 float c = a/b;
 printf("\n Result : %d",(int)c);
 
  //Part 2
 int a2;
 float b2;
 printf("\nEnter The First Number(Negative integer) : ");
 scanf("%f",&a2);
 printf("\nEnter The Second Number(Float Positive) : ");
 scanf("%f",&b2);
 float c2 = a2/b2;
 printf("\n Result : %d",(int)c2);
 
  //Part 3 
 float a3;
 int b3;
 printf("\nEnter The First Number(Positive Float) : ");
 scanf("%f",&a3);
 printf("\nEnter The Second Number(Negative integer) : ");
 scanf("%f",&b3);
 float c3 = a3/b3;
 printf("\n Result : %f",c3);
 

}

