/**
 * labex5
**/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    string plain;
    cin>>plain;
    int depth;
    cin>>depth;
    bool up=0;
    char fr[depth+1][plain.size()+1];
        for(int i=0; i <depth;i++)
    {
        for(int j=0; j <plain.size();j++)
        {
            fr[i][j] = '-';
        }
    }
    int counter=0;
    for(int i=0; i < plain.size();i++)
    {
        fr[i][counter] = plain[i];
        if(up)
        {
            counter--;
        }
        if(!up)
        counter++;
        if(counter==0)
        {
            up=0;
        }
        if(counter==depth-1)
        {
            up=1;
        }
    }
    string ans;
    for(int i=0; i <plain.size();i++)
    {
        for(int j=0; j <depth;j++)
        {
            if(fr[i][j]>='a' && fr[i][j]<='z')
            ans +=fr[i][j];
        }
    }
    cout<<ans;
    return 0;
}