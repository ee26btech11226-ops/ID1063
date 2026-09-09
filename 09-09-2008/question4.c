#include<stdio.h>
#include<string.h>
void function(char string[100],char character[1])
{
int is_occured = 0;
if(is_occured == 0){
for(int i = 0;i<100;i++)
{
if(string[i] == character[0])
{
printf("First occurence : %d \n",i);
is_occured = 1;
break;
}
}
}



}
int main ()
{
char string[100],character[1];
printf("Enter a string : ");
scanf("%s",string);
printf("Enter a alphabet : ");
scanf("%s",character);
function(string,character);
}
