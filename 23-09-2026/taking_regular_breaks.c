#include<stdio.h>

int runLength(int a[], int n, int k)
{
int temp=0;
int index = 0;
for(int i = 0;i<n;i++)
{
if(a[i]==0)
{
temp =0;
}
else if(a[i]==1&&temp<=k)
{
temp +=1;
}
if(temp>k)
{
index = i+1;
break;
}
}
if(index == 0)
{
return 0;
}
else
{
return index;
}


}





int main()
{
int n=0;
int k=0;

scanf("%d %d",&n ,&k);
int a[n];
for(int i =0;i<n;i++)
{

scanf("%d",&a[i]);
}
printf("%d",runLength(a,n,k));
}
