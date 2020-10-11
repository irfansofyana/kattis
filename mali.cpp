#include <bits/stdc++.h>
using namespace std;

int N;
int A[101], B[101];
vector<pair<int,int> > arr[2];

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> N;
    for (int i = 0; i < N; ++i) {
        int a, b;
        cin >> a >> b;
        A[a]++;
        B[b]++;
        for (int j = 1; j <= 100; ++j) {
            if (A[j] > 0)
            arr[0].push_back({j, A[j]});
        }
        for (int j = 100; j >= 1; --j) {
            if (B[j] > 0)
            arr[1].push_back({j, B[j]});
        }
        int idx[] = {0, 0};
        int sz[] = {(int)arr[0].size(), (int)arr[1].size()};
        int ans = -1;
        while (idx[0] < sz[0] && idx[1] < sz[1]) {
            pair<int,int> bil1 = arr[0][idx[0]];
            pair<int,int> bil2 = arr[1][idx[1]];
            if (bil1.second == bil2.second) {
                idx[0]++;
                idx[1]++;
                ans = max(ans, bil1.first + bil2.first);
            } else if (bil1.second > bil2.second) {
                idx[1]++;
                ans = max(ans, bil1.first + bil2.first);
                arr[0][idx[0]].second -= bil2.second;
            } else {
                idx[0]++;
                ans = max(ans, bil1.first + bil2.first);
                arr[1][idx[1]].second -= bil1.second;
            }
        }
        cout << ans << '\n';
        for (int j = 0; j < 2; ++j) {
            arr[j].clear();
        }
    }
    return 0;
}


// 1 13
// 2 12
// 8 11
// 8 10
// 5 4
