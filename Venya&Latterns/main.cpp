#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

double can(vector<ll> v) {
    double max_Redius=INT_MIN;
    for (int i = 0; i < v.size()-1; i++) {
        double diff = v[i+1] - v[i];
        double redius = diff / 2;
        max_Redius = max(max_Redius, redius);
    }
    return max_Redius;
}

void solve() {
    int n,l;    cin>>n>>l;
    vector<ll> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    sort(v.begin(),v.end());

    // Check the start and end of the street
    bool isstartZero=true,isEndequal_L=true;
    if(v[0]!=0)  isstartZero=false;
    if(v[n-1]!=l)  isEndequal_L=false;

    double d=can(v);
    if(!isstartZero) {
        d=((v[0])>d)?v[0]:d;
    }
    if(!isEndequal_L) {
        d=((l-v[n-1])>d)?(l-v[n-1]):d;
    }
    cout<<fixed<<setprecision(9)<<d;
}


int main(){
    fastIO();
    solve();
    return 0;
}