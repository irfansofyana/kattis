#include <bits/stdc++.h>
using namespace std;

long long a, b;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    
    while (cin >> a >> b) {
        cout << abs(a-b) << '\n';
    }
    return 0;
}