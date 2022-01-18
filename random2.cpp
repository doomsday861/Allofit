
#include<bits/stdc++.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
using namespace std;
int countofelements(vector<int> listinput1, vector<int> listinput2)
{
    int n1 = listinput1.size();
    int n2 = listinput2.size();
    sort(listinput1.begin(), listinput1.end());
    sort(listinput2.begin(), listinput2.end());
    int ans = 0;
    for (int i = 0; i < n1; i++)
    {
        auto it = find(listinput2.begin(), listinput2.end(), listinput1[i]);
        if (it == listinput2.end())
            ans++;
    }
    for (int i = 0; i < n2; i++)
    {
        auto it = find(listinput1.begin(), listinput1.end(), listinput2[i]);
        if (it == listinput1.end())
            ans++;
    }
    return ans;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int n1,n2;
cin>>n1>>n2;
vector<int> listinput1(n1);
vector<int> listinput2(n2);
for(int i=0; i <n1;i++)
cin>>listinput1[i];
for(int i=0; i <n2;i++)
cin>>listinput2[i];
cout<<countofelements(listinput1,listinput2);
    return 0;
}