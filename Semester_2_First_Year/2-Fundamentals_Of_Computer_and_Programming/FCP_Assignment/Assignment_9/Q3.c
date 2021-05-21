#include <stdio.h>
#include <math.h>

struct time
{
    int second;
    int minute;
    int hour;
};

void timediff(struct time a, struct time b)
{
    int t1_sec = (a.hour * 60 * 60) + (a.minute * 60) + (a.second * 1);
    int t2_sec = (b.hour * 60 * 60) + (b.minute * 60) + (b.second * 1);
    int diff;
    if (t2_sec >= t1_sec)
    {
        diff = t2_sec - t1_sec;
    }
    else
    {
        diff = t1_sec - t2_sec;
    }
    int hr = diff / (60 * 60);
    diff = diff % 3600;
    int min = diff / 60;
    diff = diff % 60;
    int sec = diff;
    printf("\nTime Difference : %d Hours %d Minutes %d Seconds", hr, min, sec);
}

void main()
{
    struct time t1, t2;

    printf("\nEnter Time 1 Details :\n");
    printf("Time 1 Hours : ");
    scanf("%d", &t1.hour);
    printf("Time 1 Minutes : ");
    scanf("%d", &t1.minute);
    printf("Time 1 Seconds : ");
    scanf("%d", &t1.second);

    printf("\nEnter Time 2 Details :\n");
    printf("Time 2 Hours : ");
    scanf("%d", &t2.hour);
    printf("Time 2 Minutes : ");
    scanf("%d", &t2.minute);
    printf("Time 2 Seconds : ");
    scanf("%d", &t2.second);

    timediff(t1, t2);
}