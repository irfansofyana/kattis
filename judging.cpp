#include <bits/stdc++.h>
using namespace std;

int n, ans;
map<string,int> frek[2];

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    for (int i = 0; i < 2; ++i){
        for (int j = 0; j < n; ++j){
            string s; cin >> s;
            frek[i][s]++;
        }
    }
    for (map<string,int>::iterator it = frek[0].begin(); it != frek[0].end(); ++it) {
        string s = it -> first;
        if (frek[1].find(s) != frek[1].end()) {
            ans += min(it->second, frek[1][s]);
        }
    }
    cout << ans << '\n';
    return 0;
}