#include<stdio.h>

int main()
{
  int a, rev = 0, og;
  printf("Enter the number: ");
  scanf("%d",&a);

  og = a;

  while(a > 0)
  {
    rev = rev * 10 + a % 10;
    a = a / 10;
  }

  if(og == rev)
    printf("Palindrome.");
  else
    printf("Not palindrome.");

  return 0;
}