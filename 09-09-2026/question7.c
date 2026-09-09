#include<stdio.h>


void function(char *str,char x, char y)
{
for(int i= 0;i<100;i++)
{
if(str[i] == x)
{
        str[i]=y;
}

}


printf("%s",str);
}



int main ()
{
char str[100];
fgets(str,100,stdin);
char x,y;
scanf(" %c",&x);
scanf(" %c",&y);


function(str,x,y);


}


