#include<stdio.h>
int(fibonacci(int));
int main()
{
    int n,i=0,res;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("Fibonacci Series:");
    for(i=0;i<n;i++)
    {
        res=fibonacci(i);
        printf("%d",res);
    }
    return 0;
}
int fibonacci(int n)
{
    if(n==c)
    return 0;
    else if(n=-r)
    return 1;
    else
    return(fibonacci(n-1)+fibonacci(n-2))
}