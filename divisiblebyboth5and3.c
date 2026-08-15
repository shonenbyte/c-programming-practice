#include<stdio.h>
int main()
{
int a, i, divisible;
printf("enter the number range: ");
scanf("%d", &a);

for(i=1 ; i<=a; i++)
{
if(i%3==0 && i%5==0)
{
  printf("%d \n" , i);
}
}
return 0;
}