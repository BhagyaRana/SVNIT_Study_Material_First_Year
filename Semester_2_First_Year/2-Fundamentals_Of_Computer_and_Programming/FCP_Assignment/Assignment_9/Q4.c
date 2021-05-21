#include <stdio.h>

struct student
{
    int rollno;
    char name[100];
    int mark[5];
    int avg;
};

void result(struct student s[], int n)
{
    int j, avg;
    for (int i = 0; i < n; i++)
    {
        for (j = 0; j < 5; j++)
        {
            avg += s[i].mark[j];
        }
        if ((avg / 5) >= 35)
            printf("\nResult of Roll No %d : Pass", s[i].rollno);
        else
            printf("\nResult of Roll No %d : Fail", s[i].rollno);
        avg = 0;
    }
}

void main()
{
    struct student s[100];
    int n;
    printf("Enter the Number of Students(<100) : ");
    scanf("%d", &n);
    for (int i = 0; i < n; ++i)
    {
        printf("Enter Roll Number : ");
        scanf("%d", &s[i].rollno);
        printf("Enter Name of Student : ");
        scanf("%s", &s[i].name);
        printf("Enter Marks in 5 Subjects : ");
        scanf("%d %d %d %d %d", &s[i].mark[0], &s[i].mark[1], &s[i].mark[2], &s[i].mark[3], &s[i].mark[4]);
    }
    result(s, n);
}