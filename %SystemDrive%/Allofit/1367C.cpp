#include<stdio.h>
#include<conio.h>
int call=0;
void get(int n)
{
  call++;
  if(n<1)
    return;
  get(n-1);
  get(n-3);
  printf("%d",n);
}
f(int x)
{
  if(x==2)
    return 2;
  else
  {
    printf("+");
    f(x-1);
  }
}
int main()
{
  int n,i;
  n = f(6);
  printf("%d",n);
}
