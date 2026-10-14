#include<stdio.h>



int main()
{
int n;
scanf("%d",&n);
float densities[n];
for(int i=0;i<n;i++)
{
int m;
scanf("%d",&m);
float temp=0;
for(int j=0;j<m;j++)
{
float x=0;
scanf("%f",&x);
temp += x;
}
densities[i] = temp/m;
}
for(int i=0;i<n;i++){
printf("%.2f ",densities[i]);
}

}
