#include<stdio.h>


void print_border(int count)
{

for(int i= 0;i<count;i++)
{
	if(i==count-1)

	{
		printf("*\n");
	}
	else
	{
		printf("*");
	}
}

}
int main()
{
	int count;
	printf("Enter the count : ");
	scanf("%d",&count);
	print_border(count);

}
