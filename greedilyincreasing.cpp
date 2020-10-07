#include <bits/stdc++.h>
using namespace std;

const int MAXN = (int)1e6;

int N;
int arr[MAXN+2];

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> N;
    for (int i = 0; i < N; ++i) cin >> arr[i];
    int bil = arr[0];
    vector<int> ans;
    ans.push_back(bil);
    for (int i = 1; i < N; ++i) {
        if (arr[i] > bil) {
            ans.push_back(arr[i]);
            bil = arr[i];
        }
    }
    cout << (int)ans.size() << '\n';
    for (int i = 0; i < (int)ans.size(); ++i){
        cout << ans[i];
        cout << (i == (int)ans.size()-1 ? '\n' : ' ');
    }
    return 0;
}