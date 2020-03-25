#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int r,c,i=0;
        cin>>r>>c;
        if(r==1&&c==1){
            cout<<"24"<<endl;
            r++;c++;
            while(++i<=3){
                cout<<r<<" "<<c<<endl;
                cout<<r-i<<" "<<r+i<<endl;
                cout<<r+i<<" "<<c-i<<endl;
                cout<<r++<<" "<<c++<<endl;
            }
            i=4;
            while(--i>=1){
                cout<<r<<" "<<c<<endl;
                cout<<r-i<<" "<<r+i<<endl;
                cout<<r+i<<" "<<c-i<<endl;
                cout<<r++<<" "<<c++<<endl;
            }
        }else if(r==c&&(r!=1||c!=1)){
            cout<<"25"<<endl<<"1 1"<<endl;
            r=c=1;
            r++;c++;
            while(++i<=3){
                cout<<r<<" "<<c<<endl;
                cout<<r-i<<" "<<r+i<<endl;
                cout<<r+i<<" "<<c-i<<endl;
                cout<<r++<<" "<<c++<<endl;
            }
            i=4;
            while(--i>=1){
                cout<<r<<" "<<c<<endl;
                cout<<r-i<<" "<<r+i<<endl;
                cout<<r+i<<" "<<c-i<<endl;
                cout<<r++<<" "<<c++<<endl;
            }
        }else{
            cout<<"26"<<endl<<(r+c)/2<<" "<<(r+c)/2<<endl<<"1 1"<<endl;
            r=c=1;
            r++;c++;
            while(++i<=3){
                cout<<r<<" "<<c<<endl;
                cout<<r-i<<" "<<r+i<<endl;
                cout<<r+i<<" "<<c-i<<endl;
                cout<<r++<<" "<<c++<<endl;
            }
            i=4;
            while(--i>=1){
                cout<<r<<" "<<c<<endl;
                cout<<r-i<<" "<<r+i<<endl;
                cout<<r+i<<" "<<c-i<<endl;
                cout<<r++<<" "<<c++<<endl;
            }
        }
    }
    return 0;
}