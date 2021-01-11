#include<stdio.h>
// void message();
int add(int a, int b, int c)
{
 return a+b+c;
}
int main()
{	
	int a;
	scanf("%d",&a);
	int leap = (a-1)/4;
	int out = (a+leap)%7;
	printf("%d",out);
	return 0;
}
