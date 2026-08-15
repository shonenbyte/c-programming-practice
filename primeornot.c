#include<stdio.h>
int main()
{
  int a, i, counter = 0;
  printf("Enter a number: ");
  scanf("%d", &a);

  for(i = 2; i < a; i++)
  {
    if(a % i == 0)
    {
      counter++;
    }
  }
  if(counter == 0)
  {
    printf("Its a prime number.");
  }
  else
  {
    printf("Its not a prime number.");
  }
  return 0; 
}