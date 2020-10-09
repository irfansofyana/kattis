#include <bits/stdc++.h>
using namespace std;

int M, S;
vector<vector<int> > arr;
set<int> st;
vector<int> frek;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> M >> S;
    arr.resize(M);
    frek.resize(S + 1);

    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < S; ++j) {
            int x; cin >> x;
            arr[i].push_back(x);
        }
    }
    vector<int> ans;
    int idx = -1;
    for (int i = 0; i < S; ++i) {
        for (int j = 0; j < M; ++j){
            int bil = arr[j][i];
            frek[bil]++;
            if (frek[bil] == 1) {
                st.insert(bil);
            } 
            if (frek[bil] == M){
                st.erase(bil);
            }
        }
        if (st.empty()) {
            idx = i;
            break;
        }
    }
    for (int i = 0; i <= idx; ++i) {
        ans.push_back(arr[0][i]);
    }
    sort(ans.begin(), ans.end());

    cout << ans.size() << '\n';
    for (int i = 0; i < (int)ans.size(); ++i) {
        cout << ans[i];
        cout << (i == (int)ans.size() - 1 ? '\n' : ' ');
    }
    return 0;
}