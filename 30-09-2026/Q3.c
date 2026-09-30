#include<stdio.h>
long int function(long int A, long int B)
{
return A*B;
}
int main()
{
long int A;
long int B;

scanf("%ld",&A);
scanf("%ld",&B);

printf("%ld",function(A,B));

}
