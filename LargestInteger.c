#include <stdio.h>
void main ()
{
int a,b,c;
printf("Enter the values of a,b,c");
scanf("%d%d%d",&a,&b,&c);
if(a>b && a>c)
printf("a is the greatest integer");
else if(b>c)
printf("b is the greatest integer");
else
printf("c is the greatest integer");
}
