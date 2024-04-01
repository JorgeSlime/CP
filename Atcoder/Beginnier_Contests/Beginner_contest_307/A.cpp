#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

const char LN='\n';

void solve(){
    int n; cin>>n;
    int s[n],v[n*7+1];
    for(int i=0;i<n;i++){
        int tmp=0,su=0;
        for(;tmp<7;){
            cin>>v[i];
            su+=v[i];
            tmp++;
        }     
        s[i]=su;
    }
    for(auto &i:s) cout<<i<<" ";
    cout<<LN;
}
signed main(){
    ll t=1; 
    //cin>>t;
    for(;t--;) solve();
    return 0;
}

