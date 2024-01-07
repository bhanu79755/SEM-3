#include<stdio.h>
void main()
{
int n,a[10],ele,size,i;
printf("Enter the size of array:");
scanf("%d",&n);
printf("Enter array element");
for(i=0;i<=n;i++);
scanf("%d",&a[i]);
printf("Enter the elemnt to be inserted");
scanf("%d",&ele);
n++;
a[n-1]=ele;
printf("after insertion array elements are");
for(i=;i<n;i++)
printf("%d",a[i]);
}