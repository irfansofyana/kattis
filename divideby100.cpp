#include <bits/stdc++.h>
using namespace std;

string N, M;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);

    cin >> N >> M;
    int mSize = (int)M.size() - 1;
    int nSize = (int)N.size();
    string ans = "";

    if (mSize >= nSize) {
        ans += "0.";
        for (int i = 0; i < mSize-nSize; ++i) ans += "0";
        ans += N;
    } else {
        for (int i = 0; i < nSize-mSize; ++i) ans += N[i];
        ans += ".";
        for (int i = nSize-mSize; i < nSize; ++i) ans += N[i];
    }

    int i = (int)ans.size()-1;
    while (i >= 0 && ans[i] == '0') --i;
    if (ans[i] == '.') --i;
    
    cout << ans.substr(0, i + 1) << '\n';
    return 0;
}