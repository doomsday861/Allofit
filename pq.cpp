#include<bits/stdc++.h>
using namespace std;

void init()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

}

int main()
{
    init();
    int t;
    cin>>t;
    while(t--){
        int num_soldiers;
        cin>>num_soldiers;
        priority_queue<int> q;
        int arr[num_soldiers];
        for(int i = 0;i<num_soldiers;i++){
            int x;
            cin>>x;
            arr[i] = x;
            q.push(x);
        }
        int monster_strength;
        cin>>monster_strength;
        int ans = 0;
        int max_possible = 0;
        for(int i=0;i<num_soldiers;i++){
            int copy = arr[i];
            while(copy>0){
                max_possible+=copy;
                copy/=2;
            }
        }
        if(monster_strength>max_possible){
            cout<<"Not Possible"<<endl;
            continue;
        }
        while(monster_strength>0 and q.empty()==false){
            int curr = q.top();
            q.pop();
            ans++;
            monster_strength-=(curr);
            curr/=2;
            if(curr!=0)
                q.push(curr);
        }
        cout<<ans<<endl;
    }
}