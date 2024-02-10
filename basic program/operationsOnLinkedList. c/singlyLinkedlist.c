#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int count=0;
struct node
{
    int sem;
    long long int phno;
    char name[20],branch[20],usn[20];
    struct node *next;
};
struct node *first=NULL,*last=NULL,*temp=NULL,*prev=NULL;
void readdata()
{
    int sem;
    long long int phno;
    char name[20],branch[20],usn[20];
    temp=(struct node*)malloc(sizeof(struct node));
    printf("ENTER USN,NAME,BRANCH,SEM,PHNO OF STUDENT ");
    scanf("%s%s%s%d%lld",usn,name,branch,&sem,&phno);
    strcpy(temp->usn,usn);
    strcpy(temp->name,name);
    strcpy(temp->branch,branch);
    temp->sem=sem;
    temp->phno=phno;
    temp->next=NULL;
    count++;
}
void create()
{
    if(first==NULL)
    {
        first=temp;
    }
    else{
        temp->next=first;
        first=temp;
    }
}
void display()
{
    temp=first;
    if(temp==NULL)
    {
        printf("\nLINKED LIST IS EMPTY FROM BEGINNING:\n");
        while(temp!=NULL)
        {
            printf("%s%s%s%d%lld",temp->usn,temp->name,temp->branch,temp->sem,temp->phno);
            temp=temp->next;
        }
        printf("NO OF STUDENTS=%d",count);

    }
}
