#include<stdio.h>
struct animal
{
    char animalname[20]
    int  animalage
    char animalcolour[20]
    char animalfvtfood[20]
};
void main()
{
    int i,n;
    struct animal a[n]
    printf("enter number of animal information to read");
    scanf("%d",&n);
    printf("enter the animal information");
    for(i=0;i<n;i++)
    scanf("%s%d%s%s",a[i].animalname,&a[i].animalage,a[i].animalcolour,a[i].animalfvtfood);
  }