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
printf("\n 1:push 2:pop 3:palindrome work 4:status of stack 5:display 6:exit");
printf("enter your choice:");
scanf("%d",&choice);
switch(choice)
{
    case 1:printf("enter the item to be inserted:");
           scanf("%d",&item);
           push(item);
           break;
    case 2:element=pop();
           if(element)
            printf("the item deleted is%d",element);
            break;
    case 3:printf("demonstration of  how stack can be used to check palindrom\n");
           if(top==-1)
            palindrome();
           else
           printf("make first stack empty\n");
           break;
    case 4:printf("**********status of stack****************") ;
           printf("tptal number of elements can be inserted into stack:%d\n",STACKSIZE);
           printf("the total number of elemnets present in stack:%d\n,top+1");
           printf("number of loaction free in stack:%d",(STACKSIZE-top-1));
           break;
    case 5:display();
           break;
    case 6:exit(0);
    default:printf("unknow choice\n");
            break;
}
}
}
void push(int item)
{
    if(top==STACKSIZE-1)
    {
        printf("stack over flow\n");
        return;
    }
    stack[++top]=item;
}
int pop()
{
    if(top==-1)
    {
        printf("stack underflow\n");
        return(0);
    }
    return(stack[top--]);
}





}
