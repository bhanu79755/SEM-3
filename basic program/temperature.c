#include<stdio.h>
int main()
{
    float centigrade,celsius;
    printf("ENTER TEMPERATURE IN CENTIGRADE:");
    scanf("%f",&centigrade);
    celsius=(centigrade*9/5)+32;
    printf("TEMPERATURE IN CELSIUS:2%f\n",celsius);
    return 0;

}