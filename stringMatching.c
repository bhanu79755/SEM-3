#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char str[50],pat[10],rep[10];
void readstring();
void readpattren();
void readreplacestring();
void findandreplace();
void main()
{
    printf("program to find and replace a given string\n")
    readstring();
    readpattren();
    readreplacestring();
    findandreplace();
}
void readstring()
{
    printf("enetr string\n");
    scanf("%s",str);
}
 void readpattren()
{
    printf("enter pattern\n");
    scanf("%s",pat);
}
void readreplacestring()
{
    printf("enter replacment striing\n");
    scanf("%s,rep");
}
void findandreplace()
    {
        int i=0,j=0,k;
        while(str[i]!='\0'&&pat[j]!='\0')
        {
            if(str[i]!=pat[j])
                i++;
            else{
                i++;
                j++;
            
            }
        }
        if(pat[j]=='\0')
        {
            printf("the given pattren found in a string\n");
            int pcount=0, rcount=0,scount=0;
            int pos=i,space=0;
            for(k=0;pat[k]!='\0';k++)
            pcount++;
            for(k=0;rep[k]!='\0';k++)
            rcount++;
            for(k=0;str[k]!='\0';k++)
            scount++;
            if(rcount>pcount)
            {
                space=rcount-pcount;
                for(i=scount+space-1;i>pos;i--)
                {
                    str[i]=str[i-space];
                }
            }
            k=0;
            for(i=pos-pcount;rep[k]!='\0';i++)
            {
                str[i]=rep[k];
                k++;
            }
            str[scount+space]='\0';
        }
        else{
            printf("not found\n");
            }
        printf("after replacement the string=%s\n",str);
        }


    
