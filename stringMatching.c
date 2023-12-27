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

