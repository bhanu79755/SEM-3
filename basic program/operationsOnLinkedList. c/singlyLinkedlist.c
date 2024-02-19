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
void insert_atend()
{
    if(first==NULL)
   {
    first=temp;
  }
else
  {
    last=first;
    while(last->next!=NULL)
    {
        last=last->next;
    }
    last->next=temp;
  }
}
void delete_atend()
{
    last=first;
    if(first==NULL)
    {
        printf("LIST IS EMPTY\n");
        return;
    }
    else if(last->next==NULL)
    {
        printf("%s%s%s%d%lld\n",last->usn,last->name,last->branch,last->sem,last->phno);
        free(last);
        first=NULL;
    }
    else{
        while(last->next!=NULL)
        {
            prev=last;
            last=last->next;
        }
        printf("%s%s%s%d%lld",last->usn,;last->name,last->branch,last->sem,last->branch,last->phno);
        free(last);
        prev->next=NULL;
    }
    count--;
}
void insert_atfront()
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
void delete_atfront()
{
    temp=first;
    if(first==NULL)
    {
        printf("LIST IS EMPTY\n");
    }
    elseif(temp->next==NULL)
    {
        printf("%s%s%s%d%lld",temp->usn,temp->name,temp->branch,temp->sem,temp->phno);
        free(temp);
        first=NULL;
    }
    else{
        printf("%s%s%s%d%lld",temp->usn,temp->name,temp->branch,temp-.sem,temp->phno);
        first=temp->next;
        free(temp);
    }
    count--;
}
