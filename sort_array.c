#include <stdio.h>
void main()
{
    int list[10],key,found,num,i,j,t;
    int low,high,mid;
    char ch;
    printf("\n enter the max number of elements you want to  sort\n");
    scanf("%d",&num);
    printf("Do you insert a sorted array(y/n):");
    scanf("%c",&ch);
    printf("\n Enter the element you want to sort\n");
    for(i=0;i<num;i++)
    {
        scanf("%d",&list[i]);
    }
    if(ch=='n')
    {
for(i=0;i<num-1;i++)    
 {
        for(j=0;j<num-1;j++)
        {
            if(list[i]>list[j])
            {
                t=list[i];
                list[i]=list[j];
                list[j]=t;
            }
        }
       }
    }
    printf("array in sorted order\n");
  for(i=0;i<num;i++)
  printf("\t%d",list[i]);
  printf("\n");
  printf("enter the value to be searched") ;
  scanf("%d",&key);
  low=0;
  high=num-1;
  while(low<=high)
  {
    mid=(low+high)/2;
    if(key==list[mid])
    {
        printf("search is succesfull");
        printf("\n the elements is %d at %d position ",list[mid],mid+1);
        found=1;
        break;
    }
    if(key<list[mid])
    low=mid+1;
  }
  if(found!=1)
  printf("search is unsuccesfull");
}
