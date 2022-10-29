# include<stdio.h>
void main()
{
int m,n,i,j,A[20][20],sum=0;
printf("Enter the order of the matrix: ");
scanf("%d%d",&m,&n);
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("Enter the elements of matrix A[%d][%d]: ",i,j);
scanf("%d",&A[i][j]);
}
}
printf("The Matrix A:\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%d\t",A[i][j]);
}
printf("\n");
}
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
if(i==j)
sum=sum+A[i][j];
}
}
printf("Sum of Diagonal Elements = %d",sum);
}
