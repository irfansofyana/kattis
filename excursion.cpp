#include <bits/stdc++.h>
using namespace std;

string s;
int cnt[3];
long long ans;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> s;
    ans = 0LL;
    for (int i = (int)s.size()-1; i >= 0; --i){
        for (int j = 0; j < s[i]-'0'; ++j){
            ans += cnt[j];
        }
        cnt[s[i]-'0']++;
    }
    cout << ans << '\n';
    return 0;
}