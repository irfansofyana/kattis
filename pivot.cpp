#include <bits/stdc++.h>
using namespace std;

const int MAXN = 100000;

int n;
int arr[MAXN+2], mini[MAXN+2], maks[MAXN+2];

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; ++i){
        maks[i] = (i == 0 ? arr[i] : max(maks[i-1], arr[i]));
        mini[n-1-i] = (i == 0 ? arr[n-1] : min(mini[n-i], arr[n-1-i]));
    }
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        if (i == 0) {
            if (mini[i+1] > arr[i]) ++ans;
        } else if (i == n-1) {
            if (maks[i-1] < arr[i]) ++ans;
        } else {
            if (maks[i-1] < arr[i] && arr[i] < mini[i+1]) ++ans;
        }
    }
    cout << ans << '\n';
    return 0;
}