#include <bits/stdc++.h>
using namespace std;

int N;
double q, y, ans;

int main(){
    cin >> N;
    while(N--) {
        cin >> q >> y;
        ans += q * y;
    }
    cout << fixed << showpoint << setprecision(3) << ans << endl;
    return 0;
}