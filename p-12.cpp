#include<bits/stdc++.h>
using namespace std;


  //  srand(time(NULL));

void printPascal(int n)
{

for (int line = 1; line <= n; line++)
{
    int C = 1; // used to represent C(line, i)
    for (int i = 1; i <= line; i++)
    {

        // The first value in a line is always 1
        cout<< C<<" ";
        C = C * (line - i) / i;
    }
    cout<<"\n";
}

}

// Driver code
int main()
{
    long long int n ;
    cin>>n;
    printPascal(n);
    return 0;
}




