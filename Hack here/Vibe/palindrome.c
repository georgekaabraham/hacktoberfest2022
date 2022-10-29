#include<stdio.h>
#include<string.h>
void main()
{
char s[30];
int len, i, j, flag = 0;
printf("Enter the string: ");
gets(s);
for(len=0;s[len]!='\0';len++);
for(i=0;i<len/2;i++)
{
    if(s[i]!=s[len-i-1])
    {
        flag=1;
        break;
    }
}
if(flag==0)
{
    printf("palindrome");
}
else
printf("not");
}

