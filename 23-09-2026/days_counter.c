#include<stdio.h>
int dayElapsed(int d, int m)
{
int count=0;
for(int i = 1;i<m;i++)
{
if(i%2 == 0 && i!=2)
{
	count += 30;
}
else if(i%2 != 0 && i!=0)
{
count +=31;
}
else
{
count+=28;
}
}
for(int x = 1;x<=d;x++)
{
count += 1;

}






return count;

}
int main()
{
int d = 0;
int m = 0;
scanf("%d",&d);
scanf("%d",&m);

printf("%d",dayElapsed(d,m));

}
