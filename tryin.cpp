#include <bits/stdc++.h>
using namespace std;
    bool checker(vector<int>&f,vector<int>&c,string &s1,string &s2,int l, int r)
    {
        for(int i=l;i<=r;i++)
        {
//            cout<<s2[i]<<l<<" "<<r<<" "<<f[s2[i]-'a']<<" "<<c[s2[i]-'a']<<endl;
            if(f[s2[i]-'a']!=c[s2[i]-'a'])
                return 0;
        }
        return 1;
    }
    bool checkInclusion(string s1, string s2) {
        if(s1.length()>s2.length())
            return 0;
        vector<int>f(26,0);
        for(int i=0;i<s1.length();i++)
        {
            f[s1[i]-'a']++;
        }
        vector<int>c(26,0);
        for(int i=0;i<s1.length();i++)
        {
            c[s2[i]-'a']++;
        }

        for(int i=0;i<=s2.length()-s1.length();i++)
        {
            if(i==0)
                {
                    if(checker(f,c,s1,s2,i,i+s1.length()-1))
                    {
                    return 1;
                    }
                }
            else
            {
                c[s2[i-1]-'a']--;
                c[s2[i+s1.length()-1]-'a']++;
                if(checker(f,c,s1,s2,i,i+s1.length()-1))
                    return 1;
            }
        }

        return 0;
    }
int main() {
   string s1,s2;
    cin>>s1>>s2;
    cout<<checkInclusion(s1,s2)<<endl;
}
