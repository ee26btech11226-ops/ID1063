#include<stdio.h>
double calculate_area(double length, double width)
{
return length*width;
}
int main ()
{
double length,width;
printf("Enter lenght : ");
scanf("%lf",&length);
printf("Enter width : ");
scanf("%lf",&width);
double area = calculate_area(length,width);
printf("%lf\n",area);

}
