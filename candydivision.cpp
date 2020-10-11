#include <bits/stdc++.h>
using namespace std;

long long n;
set<long long> factor;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    for (long long i = 1; i <= (long long)sqrt(n); ++i){
        if (n%i == 0) {
            factor.insert(i);
            factor.insert(n / i);
        }
    }
    for (set<long long>::iterator it = factor.begin(); it != factor.end(); it++){
        if (it != factor.begin()) cout << " ";
        cout << (*it) - 1;
    }
    cout << '\n';
    
    return 0;
}