/******************************************************************************
PROBLEM 4:
We are provided with a string and a character, we have to find how many times a character occurs in the string.
In C, we have to use a Character Array for storing a string.
*******************************************************************************/

#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t); // The number of Test Cases will be stored in T.
    
    for(int i = 1; i<=t;i++)// Loop for Test Cases.
    {
       int len; //for storing the size of the character array
       scanf("%d",&len);
       char s[len+1]; // Our string on which we have to work on.
       scanf("%s",s); // The %s is quite interesting in C, do check it out.
       getchar(); // an empty getchar as C takes ENTER also as a character.
       char x;
       x = getchar(); // to store our character X.
       int counter =0; // this will store how many times X occurs in our array S.
       for(int j=0; j < len;j++)
       {
           if(s[j] == x) // Checks every character of array S, if it is equal to our character X.
           counter++;
       }
       printf("%d\n",counter);
    }
    return 0;
}
