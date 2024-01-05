#include<stdio.h>
#define STACKSIZE 5
#include<stdlib.h>
int choice,top=-1;
int stack[10],item,element;
void push(int);
int pop();
void display();
void palindrome();
void main()
{
    while(1)
{
printf("\n**********************************MENU************************\n");
printf("\n 1:Push\n\t2:Pop\n\t3:Palindrome Work\n\t4:Status of stack\n\t5:Display\n\t6:exit\n\n");
printf("Enter your choice:");
scanf("%d",&choice);
switch(choice)
{
    case 1:printf("Enter the item to be inserted:");
           scanf("%d",&item);
           push(item);
           break;
    case 2:element=pop();
           if(element)
            printf("The item deleted is%d",element);
            break;
    case 3:printf("Demonstration of  how stack can be used to check palindrome\n");
           if(top==-1)
            palindrome();
           else
           printf("Make first stack empty\n");
           break;
    case 4:printf("**********status of stack****************") ;
           printf("T0tal number of elements can be inserted into stack:%d\n",STACKSIZE);
           printf("The total number of elemnets present in stack:%d\n,top+1");
           printf("Number of loaction free in stack:%d",(STACKSIZE-top-1));
           break;
    case 5:display();
           break;
    case 6:exit(0);
    default:printf("invalid choice\n");
            break;
            
}
}
}
void push(int item)
{
    if(top==STACKSIZE-1)
    {
        printf("Stack over flow\n");
        return;
    }
    stack[++top]=item;
}
int pop()
{
    if(top==-1)
    {
        printf("Stack underflow\n");
        return(0);
    }
    return(stack[top--]);
}
void palindrome()
{
    int digit,rev=0,lenth,m,num,a[5],n=0,i;
    printf("Enter the element:");
    scanf("%d",&num);
    m=num;
    while(m!=0)
    {
        digit=m%10;
        n++;
        a[n]=digit;
        m=m/10;
    }
    for(i=n;i>0;i--)
        push(a[i]);

    while(top!=-1)
    {
        digit=pop();
        rev=rev*10+digit;
    }
    if(num==rev)
    printf("\n The given number is palindrome\n");
    else 
    printf("\nThe given  umber is not palindrome\n");
 }

    void display()
    {
        int i;
        if(top==-1)
        {
            printf("Stack is Empty\n");
            return;
        }

            printf("The contents of Stack are\n");
            for(i=top;i>=0;i--)
            {
                printf("%d\n",stack[i]);
            }
        
    }
