#include<stdio.h>
#include<math.h>
double rms(double a[],int n)
{
double rms_Value = 0;
for(int i = 0;i<n;i++)
{
rms_Value += (a[i]*a[i])/n;


}
return sqrt(rms_Value);

}
int main()
{
int n = 0;
scanf("%d",&n);
double a[n];
for(int i=0;i<n;i++)
{
scanf("%lf",&a[i]);

}
printf("%f",rms(a,n));
}
