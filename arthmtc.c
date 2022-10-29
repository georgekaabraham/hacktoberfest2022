#include<stdio.h>
void main()
{
int a,b,c,d,e,f,g;
float res;
printf("ENTER THE VALUES OF a,b,c,d,e,f,g");
scanf("%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g);
res=((a-b/c*d+e)*(f+g));
printf("RESULT=%f",res);
}
