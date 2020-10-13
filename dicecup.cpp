#include <bits/stdc++.h>
using namespace std;

int arr[41], n, m;
vector<pair<int,int> > ans;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> n >> m;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            arr[i+j]++;
        }
    }
    for (int i = 2; i <= 40; ++i) {
        if (arr[i] > 0) {
            ans.push_back(make_pair(arr[i], i));
        }
    }
    sort(ans.begin(), ans.end());
    vector<int> res;

    res.push_back(ans[(int)ans.size()-1].second);

    for (int i = (int)ans.size()-2; i >= 0; --i) {
        if (ans[i].first == ans[i+1].first) {
            res.push_back(ans[i].second);
        } else break;
    }

    for (int i = (int)res.size()-1; i >= 0; --i){
        cout << res[i] << '\n';
    }
    return 0;
}