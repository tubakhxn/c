#include<stdio.h>
#define daysinweek 7
int main()
{
   int ndays, year, month, days;
   printf("enter the number of days\n");
   scanf("%d",&ndays);
   year= ndays/365;
   month=ndays/30;
   days=(ndays%365%daysinweek);
   printf("%d is equal to %d years, %d months and %d days",ndays, year, month, days);
}