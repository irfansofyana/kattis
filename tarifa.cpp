#include <bits/stdc++.h>
using namespace std;

int x, n;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> x >> n;
    int now = 0;
    for (int i = 0; i < n; ++i) {
        now += x;
        int habis; cin >> habis;
        now -= habis;
    }
    now += x;
    cout << now << '\n';

    return 0;
}