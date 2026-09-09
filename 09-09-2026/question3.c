#include<stdio.h>
#include<string.h>

void swapping(char str[100])
{
char new_word[100];
int length = strlen(str);
strcpy(new_word,str) ;
new_word[0] = str[1];
new_word[1] = str[0];

printf("%s",new_word);
}
int main()
{
printf("Enter the string : ");
char str[100];
scanf("%s",str);
swapping(str);


}


