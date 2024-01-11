#include<stdio.h>
void main()
{
    int i,n,pos,ele,a[10];
    printf("Enter the size of array");
    scanf("%d",&n);
    printf("Enter array element");
    for(i=0;i<n;i++)
    scanf("%d",a[i])
    printf("Enter the position");
    scanf("%d",&pos);
    printf("Enter the element to be inserted");
    scanf("%d",&ele);
    for(i=n;i>=pos;i--)
    {
        a[i]=a[i-1];
    }
    n++
    a[pos-1]=ele;
    }
