/**
 * 489C codeforces
**/
#include<bits/stdc++.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
using namespace std;
bool can(int m, int s)
{
    return s >= 0 && s <= 9 * m;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
ll m,n;
cin >>m>>n;
string smol,big;
ll sum=0;
if(n > (9*m) || n==0 || m==0 )
{
	if (m==1 && n==0)
		cout<<"0 " <<"0";
	else 
		cout<<-1<<" "<<-1;
	return 0;
}

for(ll i=0; i < m;i++)
{
	//cout<<n-sum<<endl;
	if((n-sum)>=9)
		{
			big.push_back('9');
			sum +=9;
		}
	else
	{
		if((n-sum)==-1)
				big.push_back('0');
		else
		{
			big.push_back('0'-(sum-n));
			sum +=n-sum;
		}
	}
}
smol = "";
sum = n;
int d= m;
string minn="";
for (int i = 0; i < m; i++)
        for (int d = 0; d < 10; d++)
            if ((i > 0 || d > 0 || (m == 1 && d == 0)) && can(m - i - 1, sum - d))
            {
                minn += char('0' + d);
                sum -= d;
                break;
            }
smol =minn;
cout<<smol<<" "<<big;

    return 0;
}