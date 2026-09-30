#include<stdio.h>
int main()
{
unsigned int hours,minutes,seconds;
unsigned int total_seconds = 0;

scanf("%u %u %u",&hours,&minutes,&seconds);
for(int i =0;i<hours;i++)
{
total_seconds+=3600;
}
for(int i =0;i<minutes;i++)
{
total_seconds+=60;
}
total_seconds +=seconds;
printf("%u",total_seconds);
}
