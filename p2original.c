#include <stdio.h>
int input()
{
  int i;
  scanf("%d",&i);
  return i;
}
int cmp(int a, int b, int c)
{
  if (a>b && a>c)
  return a;
  else
  if (b>c)
  return b;
  else
  return c;
}
void output(int a, int b, int c, int largest)
{
  printf("The greates of %d, %d and %d is %d \n",a,b,c,largest);
}
int main()
{
  int a, b, c, largest;
  printf("Enter 3 numbers: \n");
  a=input();
  b=input();
  c=input();
  largest=cmp(a, b, c);
  output(a, b, c, largest);
}