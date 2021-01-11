/******************************************************************************
PROBLEM 2:
All you have to do is output the Table of X till 10 and change the line at the end.
*******************************************************************************/

#include <stdio.h>

int main()
{
    int x;
    printf("Enter the value of X:\n");
    scanf("%d",&x);
    for(int i =1; i<=10;i++)
    {
        int output = x*i;
        printf("%d \n",output);
    }
}
