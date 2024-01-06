#include<stdio.h>
void main()
{
    int n,a[100],i,key,high,low,mid,loc=-1;
    printf("Enter the size of thr array\n");
    scanf("%d",&n);
    printf("Enter the elements of array in sorted order\n");
    for(i=0;i<n;i++)
    scanf("%d",a[i]);
    low=0;
    high=n-1;
    while(low<=high)
    {
        mid=(high+low)/2;
        if(key==a[mid])
        {
            loc=mid+1;
            break;
        }
        else
        {

            if(key<a[mid])
            high=mid-1;

            else if
             (key>a[mid])
             low=mid+1;
        }
    }
    if(loc>0)
    printf("\nthe element %d fouund at %d",key,loc);
    else
    printf("\nthe search is unsuccessfull")
 }


