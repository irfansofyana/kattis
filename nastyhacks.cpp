#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin >> t;

    while (t--) {
        int r, e, c;
        cin >> r >> e >> c;
        if (e-c > r) cout << "advertise\n";
        else if (e-c == r) cout << "does not matter\n";
        else cout << "do not advertise\n";
    }
    return 0;
}