// Longest Common Subsequence: Given two sequences,
// find the length of longest subsequence present in both of them
// Eg:
// LCS for input Sequences “ABCDGH” and “AEDFHR” is “ADH” of length 3.
// LCS for input Sequences “AGGTAB” and “GXTXAYB” is “GTAB” of length 4.

#include<bits/stdc++.h>
using namespace std;
int solver(string &s1, string &s2, int i, int j)
{
    if(i>=s1.length() or j>=s2.length())
    {
        return 0;
    } // BASECASE
    if(s1[i]==s2[j])
    {
        return 1 + solver(s1,s2,i+1,j+1);
    }
    else
    {
        return max(solver(s1,s2,i+1,j),solver(s1,s2,i,j+1));
    }
}
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    cout<< solver(s1,s2,0,0);
    return 0;
}
