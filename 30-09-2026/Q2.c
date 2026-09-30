#include<stdio.h>



int function( int n, int m,int A[n][m],int i,int j)
{
int count =0 ;	
if(A[i][j] == 1)
{
return -1;
}
else
{
if(A[i-1][j-1]==1)
{
count+=1;
}
if(A[i-1][j]==1)
{
count+=1;
}
if(A[i-1][j+1]==1)
{
count+=1;
}
if(A[i][j-1]==1)
{
count+=1;
}
if(A[i][j]==1)
{
count+=1;
}
if(A[i][j+1]==1)
{
count+=1;
}
if(A[i+1][j-1]==1)
{
count+=1;
}
if(A[i+1][j]==1)
{
count+=1;
}
if(A[i+1][j+1]==1)
{
count+=1;
}
return count;
}

}













int main()
{
int n,m;
scanf("Enter the value of n and m %d %d",&n,&m);
int A[n][m];
for(int i=0;i<n;i++)
{
for(int j=0;j<m;j++)
{
scanf("%d",&A[i][j]);
}
printf("\n");
}
for(int i=0;i<n;i++)
{
for(int j=0;j<m;j++)
{
printf("%d ",function(n,m,A,i,j));
}
printf("\n");
}

}
