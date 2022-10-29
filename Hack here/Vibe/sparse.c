#include<stdio.h>
void main()
{
int a[30][30],A[30][30],i,j,k=0,z=0,nz=0,r,c;
printf("\nEnter size - row coloumn: \n");
scanf("%d%d",&r,&c);
printf("Enter the Matrix: \n");
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
        scanf("%d",&a[i][j]);
    }
}
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
        if(a[i][j]!=0)
        nz++;
        else
        z++;
    }
}
if(z>nz)
{
    A[k][1]=r;
    A[k][2]=c;
    A[k][3]=nz;
    k++;
}
}
