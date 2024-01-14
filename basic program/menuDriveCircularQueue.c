#include<stdio.h>
#define QSIZE 5
#include<string.h>
#include<stdlib.h>
int choice,rear,front,count=0;
char queue[10],item;
void insert();
void delete();
void display();
void main()
{
    front=0;rear=-1;
    count=0;
    for(;;)
    {
        printf("\n\nMENU\n\n");
        printf("\n1:INSERT\t\n2:DELETE\t\n3:DISPLAY\t\n4:EXIT\n");
        printf("ENTER YOUR CHOICE:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:printf("ENTER THE ITEM TO BE INSERTED:");
                    scanf("%d",&item);
                    insert();
                    break;
            case 2:delete();
                   break;
            case 3:display();
                   break;
            default:exit(0);
        }
    }
void insert()
{
    if(count==QSIZE)
    {
        printf("QUEUE OVER FLOW");
        return;
    }
    rear=(rear+1)%QSIZE;
    queue[rear]=item;
    count+=1;
}
void delete()
{
    if(count==0)
    {
        printf("QUEUE UNDER FLOW\n");
        return;
    }
    printf("%c is deleted\n",queue[front]);
    front=(front+1)%QSIZE
}
void display()
{
    int i,m;
    m=front;
    if(count==0)
    {
        printf("QUEUE IS EMPTY\n")
        return;

    }
    printf("CONTENTS OF QUEUE:\n");
    for(i=1;i<=count;i++)
    {
        printf("%c\t",queue[m]);
        m=(m+1)%QSIZE;
    }
   }
}