#include <bits/stdc++.h>
using namespace std;

int t, s, d;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    while (t--) {
        cin >> s >> d;
        int a = (s + d) / 2;
        int b = s - a;
        if ((s + d) % 2 == 1 || a < 0 || b < 0) cout << "impossible\n";
        else cout << a << " " << b << '\n';
    }
    return 0;
}