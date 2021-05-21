#include<stdio.h>

void main()
 {
 	int n,c;
 	printf("Enter the Number Of Years : ");
 	scanf("%d",&n);
 	printf("\n Select any Option From Below :");
 	printf("\n 1 = Months \n 2 = days \n 3 = hours \n 4 = minutes \n 5 = seconds \n 6=weeks \n");
  	scanf("%d",&c);
	  switch(c)
	   {
	   	case 1 : printf("\nMonths : %d",(n*12));
		        break;
	   	case 2 : printf("\nDays : %d",(n*365));
		        break;
	   	case 3 : printf("\nHours : %d",(n*365*24));
		        break;
		case 4 : printf("\nMinutes : %d",(n*365*24*60));
		        break;
	   	case 5 : printf("\nSeconds : %d",(n*365*24*60*60));
		        break;
		case 6 : printf("\nWeeks : %d",(n*52));
		        break;
		default : printf("\n Wrong Case Entered!");        
		}	
 }
