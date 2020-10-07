#include <bits/stdc++.h>
using namespace std;

int main(){
    double constant = 1000.0 * 5280 / 4854.0;
    double x;
    
    cin >> x;
    double ansFloat = x * constant;
    if (ansFloat - (int)ansFloat < 0.5) cout << int(ansFloat) << endl;
    else cout << int(ansFloat) + 1 << endl;
    
    return 0;
}