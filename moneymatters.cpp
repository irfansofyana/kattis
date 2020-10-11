#include <bits/stdc++.h>
using namespace std;

const int MAXN = 10002;

int n, m;
int parent[MAXN], sum[MAXN];

int cari(int a) {
    return (a == parent[a] ? a : parent[a] = cari(parent[a]));
}

void gabung(int a, int b){
    int x = cari(a);
    int y = cari(b);
    if (x != y) {
        parent[x] = y;
        sum[y] += sum[x];
    }
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        int x; cin >> x;
        parent[i] = i;
        sum[i] = x;
    }
    for (int i = 0; i < m; ++i) {
        int a, b; cin >> a >> b;
        gabung(a, b);
    }
    for (int i = 0; i < n; ++i) {
        if (sum[cari(i)] != 0) {
            cout << "IMPOSSIBLE\n";
            return 0;
        }
    }
    cout << "POSSIBLE\n";
    return 0;
}