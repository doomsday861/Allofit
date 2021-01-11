#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;

const int maxn=10000+10;

typedef long long ll;

ll p[maxn];
int prime[maxn],cnt[maxn],num[maxn];

void divide(int n){
     int tot=0;
     for (int i=2;i*i<=n;i++){
        if(n%i==0){
            prime[tot++]=i;
        do{
            n/=i;
        }while(n%i==0);
       }
     }
     if(n>1) prime[tot++]=n;
     for (int i=1;i<(1<<tot);i++){
        int k=1;
        int sum=0;
        for(int j=0;j<tot;j++){
            if(i&(1<<j)){
                k*=prime[j];
                sum++;
            }
        }
        cnt[k]++;
        num[k]=sum;
     }
}

int main(){
    for (ll i=4;i<maxn;i++) p[i]=(i-1)*(i-2)*(i-3)*i/24;
    int n,m;
    memset(num,0,sizeof(num));
    while(scanf("%d",&n)!=EOF){
        memset(cnt,0,sizeof(cnt));
        for (int i=1;i<=n;i++) {
            scanf("%d",&m);
            divide(m);
        }
        ll ans=0;
        for (int i=2;i<maxn;i++){
            if(cnt[i]>=4){
                if(num[i]&1) ans+=p[cnt[i]];
                else ans-=p[cnt[i]];
            }
        }
        printf("%lld\n",p[n]-ans);
    }
return 0;
}