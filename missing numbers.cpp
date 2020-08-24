#include <bits/stdc++.h>
using namespace std;

int n, last;
bool isExist[205];

int main(){
    cin >> n;
    for (int i = 0; i < n; ++i){
        int x; cin >> x;
        isExist[x] = true;
        if (i == n-1) last = x;
    }
    bool isExistMissing = false;
    for (int i = 1; i <= last; ++i){
        if (!isExist[i]) {
            isExistMissing = true;
            cout << i << endl;
        }
    }
    if (!isExistMissing) cout << "good job\n";
}