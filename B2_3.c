/******************************************************************************
PROBLEM 3:
This seems simple as it is only to check whether the number is prime or not.
However the catch is constraints, the given constraints are too high to be run in a loop from 1 to N.
You may have to check for more optimised solutions for this problem.

The Test Cases were huge in order to make us realise the importance of keeping loops as small as you can.
*******************************************************************************/

#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t); // The number of Test Cases will be stored in T.
    
    for(int i = 1; i<=t;i++)// Loop for Test Cases.
    {
        int n;
        scanf("%d", &n);
        
        if(n%2==0 && n != 2) // An even number can never be a prime, except the number 2, therefore we save more time by not going in a loop.
        {
            printf("NO\n");
        }
        else
        {
            int flag = 0; // This variable will keep record if a number is divided anywhere from 1 to Square Root of N.
        
            for(int j = 2; j <= sqrt(n);j++) // We only have to run the loop from 2 to Square Root of N.
            {
                if(n%j==0)
                flag++;
            }
            if(flag ==0) // if flag remains 0, means the number was never divisible till Root (N), therefore Prime.
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
    }
}
