#include<stdio.h>
void main()
{
    char str1[10];
    int strcount,i;
    printf("Enter the string:");
    scanf("%s",str1);
    for(i=0;str1[i]!='\0';i++)
    {
        strcount++;
    }
    printf("The length of string=%d",strcount);

}