#include <bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        ll a[4*n];
        for(int i = 0; i < 4*n; i++) cin >> a[i];
        set<int> s1, s2;
        ll bp[4*n], sp[4*n];
        ll sm = 0;
        for(int i = 0; i < n; i++) s1.insert(a[i]), s2.insert(-a[i]), sm += a[i];
        bp[n - 1] = sp[n - 1] = sm;
        for(int i = n; i < 4*n; i++) {
            bp[i] = bp[i - 1];
            sp[i] = sp[i - 1];
            if(a[i] > *(s1.begin())) {
                bp[i] -= *(s1.begin());
                s1.erase(s1.begin());
                bp[i] += a[i];
                s1.insert(a[i]);
            }
            if(a[i] < -(*(s2.begin()))) {
                sp[i] += *(s2.begin());
                s2.erase(s2.begin());
                s2.insert(-a[i]);
                sp[i] += a[i];
            }
        }
        reverse(a, a + 4*n);
        s1.clear(); s2.clear();
        ll bs[4*n], ss[4*n];
        sm = 0;
        for(int i = 0; i < n; i++) s1.insert(a[i]), s2.insert(-a[i]), sm += a[i];
        bs[n - 1] = ss[n - 1] = sm;
        for(int i = n; i < 4*n; i++) {
            bs[i] = bs[i - 1];
            ss[i] = ss[i - 1];
            if(a[i] > *(s1.begin())) {
                bs[i] -= *(s1.begin());
                s1.erase(s1.begin());
                bs[i] += a[i];
                s1.insert(a[i]);
            }
            if(a[i] < -(*(s2.begin()))) {
                ss[i] += *(s2.begin());
                s2.erase(s2.begin());
                s2.insert(-a[i]);
                ss[i] += a[i];
            }
        }
        reverse(ss, ss + 4*n);
        reverse(bs, bs + 4*n);
        ll ans = 0;
        for(auto x:bp)
            cout<<x<<" ";
        cout<<endl;
        for(auto x: sp)
            cout<<x<<" ";
        cout<<endl;
        for(auto x:bs)
            cout<<x<<" ";
        cout<<endl;
        for(auto x:ss)
            cout<<x<<" ";
        cout<<endl;
        for(int i = n; i < 3*n; i++) {
            ans = max(ans, abs(bp[i] - ss[i + 1]));
            ans = max(ans, abs(sp[i] - bs[i + 1]));
        }
        cout << ans << "\n";
    }
}