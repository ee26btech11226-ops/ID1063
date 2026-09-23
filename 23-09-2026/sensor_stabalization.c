#include<stdio.h>

int firstStable(double a[],int n, double tollerance)
{
int index=0;
for(int i=0;i<n;i++)
{
if(a[i+1]-a[i]<0)
{
if(-(a[i+1]-a[i]) <= tollerance)
{
index = i;
break;
}
}
else
{
if(a[i+1]-a[i]<=tollerance)
{
index = i;
break;
}

}

}
return index;
}



int main()
{
int n;
double tollerance;
scanf("%d",&n);
double a[n];
for(int i=0;i<n;i++)
{
scanf("%lf",&a[i]);
}
scanf("%lf",&tollerance);
printf("%d",firstStable(a,n,tollerance));
}
