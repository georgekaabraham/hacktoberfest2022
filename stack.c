#include<stdio.h>
#include<ctype.h>
#define max 3
void push();
void pop();
void display();
int s[max];
int top=-1;
//Main function 
void main()
{
char ch;
int cho;
do 
{
    printf("Enter the choice: \n 1) Push\n 2) Pop\n 3) Display\n Enter here: ");
    scanf("%d",&cho);
    switch(cho)
    {
        case 1:
        push();
        break;
        case 2:
        pop();
        break;
        case 3:
        display();
        break;
        default:
        printf("\nInvalid choice");
    }
    printf("Do you want to continue(y/n): ");
    fflush(stdin);
    scanf("%c",&ch);
} while (toupper(ch)=='Y');
}
//PUSH function
void push()
{
    int item;
    if(top>=max-1)
    printf("\nStack is Full\n");
    else
    {
        printf("\nEnter any item: ");
        scanf("%d",&item);
        top++;
        s[top]=item;
    }
}
//POP function 
void pop()
{
    int item;
    if(top==-1)
    printf("\nStack is Empty\n");
    else
    {
        item=s[top];
        printf("\nDeleted item is: %d\n",item);
        top--;
    }
}
//DISPLAY function 
void display()
{
    int i;
    if(top==-1)
    printf("\nStack is Empty & no element is displayed\n");
    else
    {
        for(i=top;i>-1;i--)
        {
            printf("\n%d\n",s[i]);
            printf("\n==\n");
        }
    }
}