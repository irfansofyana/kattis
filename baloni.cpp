#include <bits/stdc++.h>
using namespace std;

const int MAXN = (int)1e6;

int N, arr[MAXN+2];
int frek[MAXN+2];

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> N;
    for (int i = 0; i < N; ++i)
        cin >> arr[i];
    for (int i = N-1; i >= 0; --i) {
        if (i == N-1) {
            frek[arr[i]]++;
        } else {
            if (arr[i] == 1) frek[1]++;
            else {
                int bil = arr[i] - 1;
                if (frek[bil] == 0) {
                    frek[bil + 1]++;
                } else {
                    frek[bil]--;
                    frek[bil + 1]++;
                }
            }
        }
    }
    int ans = 0;
    for (int i = 1; i <= MAXN; ++i){
        ans += frek[i];
    }
    cout << ans << '\n';
    return 0;
}