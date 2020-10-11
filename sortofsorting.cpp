#include <bits/stdc++.h>
using namespace std;

int n, tc;
vector<pair<string,int> > arr;

bool cmp(pair<string,int> a, pair<string,int> b) {
    string ta = a.first.substr(0, 2);
    string tb = b.first.substr(0, 2);

    if (ta == tb) 
        return a.second < b.second;
    else 
        return ta < tb;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    while (cin >> n) {
        if (n == 0) break;
        arr.clear();
        if (tc != 0) cout << '\n';
        for (int i = 0; i < n; ++i) {
            string s; cin >> s;
            arr.push_back(make_pair(s, i));
        }
        sort(arr.begin(), arr.end(), cmp);
        for (int i = 0; i < n; ++i){
            cout << arr[i].first << '\n';
        }
        ++tc;
    }
    return 0;
}