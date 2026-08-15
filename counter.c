#include<stdio.h>
int main()
{
  int a;
printf("enter");
scanf("%d", &a);

for(; a>0 ;)
{
a%10==a;
printf("the digits are %d\n" ,a);
a/10;


}
return 0;}