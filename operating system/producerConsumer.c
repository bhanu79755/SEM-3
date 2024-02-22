#include<stdio.h>
#include<stdlib.h>
int mutex=1;
int full=0;
int empty=10,x=10;
void producer()
{
    --mutex;
    ++full;
    --empty;
    x++;
    printf("producer produces %d",x);
    ++mutex;
}
void consume()
{
    --mutex;
    --full;
    ++empty;
    printf("consumer consumes %d",x);
    x--;
    ++mutex;
} 
int main()
{
int n,i;
printf("\n 1.press 1 for producer\n2.press 2 for consumer\n3.press 3 for exit\n");
for(i=1;i<0;i++)
{
    printf("\n ENTER YOUR CHOICE:\n");
    scanf("%d",&n);
    switch(n) 
    {
        case 1:if((mutex==1)&&(empty!=0))
        {
         producer();
        }
        else{
            printf("BUFFER IS FULL");
        }
        break;
    case 2:if((mutex==1)&&(full!=0))
        {
             consumer();

        }
              printf("BUFFER IS FULL");
               break;
    case 3:exit(0)
          break;
    }
}
}

