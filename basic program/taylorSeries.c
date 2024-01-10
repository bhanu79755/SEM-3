#include<stdio.h>
#include<math.h>
int main()
{
    int i;
    float x,t,sum,sum1,y;
    printf("Enter the angle\n");
    scanf("%f",&x);
    y=x;
    x=3.1428*(x/180.0);
    sum=x;
    t=x;
    i=1;
    do
    {
    i=i+2;
    t=(-t*x*x)/((i-1)*i);
    sum=sum+t;
    }
    while(fabs(t)>0.00005);
    printf("sin(%f)using taylor series=%f\n",y,sum);
    sum1=sin(x);
    printf("Using inbuilt function sin(%f)=%f",y,sum1);
}