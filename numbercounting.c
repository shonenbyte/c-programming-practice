#include<stdio.h>
int main()
{
  int a, digi;
  printf("Enter: ");
  scanf("%d", &a);

  while (a != 0)
  {
    digi = a % 10;
    printf("%d ", digi);
    a = a / 10;
  }

  return 0;
}