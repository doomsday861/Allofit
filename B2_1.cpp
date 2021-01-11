/******************************************************************************
PROBLEM 1:
Consider the students from 1 to 9, sitting in a circle
All you have to do is count till X, recursively until you have found a student number
Once the count goes beyond 9, you have to go back to 1.
Example: If X = 11

    Student Number : 1 2 3 4 5 6 7 8 9  1  2 
    Counter:         1 2 3 4 5 6 7 8 9 10 11
    Once counter is equal to X, we stop and print student number.
    
METHOD 2: One Line Method 
Since our answer will always be in the range 1 to 9, we can use MODULO Operator on it.
All you have to do is find out X % 9
The Only Edge case is when X % 9 == 0, Then our Student ID is 9 itself.
*******************************************************************************/

#include <stdio.h>

int main()
{
    int x;
    printf("Enter the value of X:\n");
    scanf("%d",&x);
    int counter =1;
    int student_number = 1;
    while(counter !=x)
    {
        counter++;
        student_number++;
        if(student_number == 10 )
        student_number = 1;
    }
    printf("%d \n", student_number);
    
    //METHOD 2 
    if(x%9 == 0)
    {
        student_number = 9;
    }
    else
    {
        student_number = x % 9;
    }
    printf("%d", student_number);
}
