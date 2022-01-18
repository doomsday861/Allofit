
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    char fr[26][26];
for(int i=0; i < 26;i++)
{
    for(int j=0; j < 26;j++)
    {
        fr[i][j] = 'A'+(i+j)%26;
    }
}
string plaintext;
cin>>plaintext;
string key;
cin>>key;
for(int i=0; i<plaintext.length();i++)
{
   cout<<fr[plaintext[i]-'A'][key[i]-'A'];
}
    return 0;
}