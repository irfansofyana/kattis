#include <bits/stdc++.h>
using namespace std;

int l, r;

int main(){
    cin >> l >> r;
    if (l == 0 && r == 0) cout << "Not a moose\n";
    else if (l == r) cout << "Even " << l + r << endl;
    else cout << "Odd " << 2*max(l, r) << endl;
    return 0;
}