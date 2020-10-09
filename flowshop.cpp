#include<bits/stdc++.h>
using namespace std;

int N, M;
int arr[1005][1005];
long long last[1005][1005];

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> N >> M;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            int left = (j == 0 ? 0 : last[i][j-1]);
            int up = (i == 0 ? 0 : last[i-1][j]);
            last[i][j] = 1LL * max(left, up) + arr[i][j];
        }
        cout << last[i][M-1];
        cout << (i == N-1 ? '\n' : ' ');
    }
    return 0;
}