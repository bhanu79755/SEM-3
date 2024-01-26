#include<stdio.h>
void main()
{
    char str1[10]="HELLO";
    char str2[20]="WELCOME TO C PROGRAM";
    int i,j=0; 
    i=strlen(str1) ;
    for(j=0;str2[j]!='\0';j++)
    {
        str1[i]=str2[j];
        i++;
    }  
    printf("After concatination string is",str1);
}