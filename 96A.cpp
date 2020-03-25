 //     _                               _              ___   __   _ 
 //  __| | ___   ___  _ __ ___  ___  __| | __ _ _   _ ( _ ) / /_ / |
 // / _` |/ _ \ / _ \| '_ ` _ \/ __|/ _` |/ _` | | | |/ _ \| '_ \| |
// | (_| | (_) | (_) | | | | | \__ \ (_| | (_| | |_| | (_) | (_) | |
//  \__,_|\___/ \___/|_| |_| |_|___/\__,_|\__,_|\__, |\___/ \___/|_|
//                                              |___/               

#include<bits/stdc++.h>
#include<time.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
using namespace std::chrono;
//freopen("in.txt","r",stdin);
//freopen("output.ans","w",stdout);
 //auto start = high_resolution_clock::now(); 
 string s;
 cin >> s;
 ll count =0;
 bool f =0;
 for(ll i =0 ;i<s.length();i++)
 {
	 if(s[i]==s[i+1])
	 {
		 count++;
	 }
	 if(count==6)
	 {
		 f =1;
		 break;
	 }
	 else if(s[i]!=s[i+1])
	 count = 0;
 }
 if(f)
 cout<<"YES"<<endl;
 else
 cout<<"NO"<<endl;
	 
//	auto stop = high_resolution_clock::now(); 
//    auto duration = duration_cast<seconds>(stop - start); 
//cout << "Time taken by function: "
//         << duration.count() << "seconds" << endl; 
  
    return 0; 
} 
