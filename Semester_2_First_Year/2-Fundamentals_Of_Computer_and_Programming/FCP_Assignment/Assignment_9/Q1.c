#include <stdio.h>
#include <conio.h>
#include <string.h>

struct book
{
    int ISBN_No;
    char Title[100];
    int Price;
};
void output(struct book book[], int n)
{
    int i, t = 1;
    for (i = 0; i < n; i++, t++)
    {
        printf("\n");
        printf("Book No. %d\n", t);
        printf("\t\tBook %d ISBN No. is = %d \n", t, book[i].ISBN_No);
        printf("\t\tBook %d Title is = %s \n", t, book[i].Title);
        printf("\t\tBook %d Price is = %d \n", t, book[i].Price);
        printf("\n");
    }
}

void main()
{
    int n;
    printf("Enter the Number of Book(<100): ");
    scanf("%d", &n);
    fflush(stdin);
    struct book b[100];
    for (int i = 0; i < n; ++i)
    {
        printf("\nEnter I.S.B.N. Number: ");
        scanf("%d", &b[i].ISBN_No);
        printf("Enter Title of Book: ");
        scanf("%s", &b[i].Title);
        fflush(stdin);  //Otherwise takes "Enter" as Input 
        printf("Enter Price of Book: ");
        scanf("%d", &b[i].Price);
    }
    printf("\nThe Details of Books are as follows :");
    output(b, n);
    getch();
}