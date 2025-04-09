#include <bits/stdc++.h>
using namespace std;
using ll = long long;


void fastIO() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
}


void solve() {
    ll n;
    while (cin >> n && n != 0) {
        ll root = sqrt(n);
        if (root * root == n) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }

}


int main() {
    fastIO();
    solve();
    return 0;
}