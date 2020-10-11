#include <bits/stdc++.h>
using namespace std;

int arr[21];
int n, t, tc;
map<int,vector<int> >  mep;

void output(int x){
    vector<int> bil;
    for (int i = 0; i < n; ++i) {
        if ((x & (1<<i)) > 0) {
            bil.push_back(arr[i]);
        }
    }
    for (int i = 0; i < (int)bil.size(); ++i) {
        cout << bil[i];
        cout << (i == (int)bil.size()-1 ? '\n' : ' ');
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 0; i < n; ++i) cin >> arr[i];
        int ans[2] = {-1, -1};
        for (int i = 1; i < (1 << n); ++i){
            int sum = 0;
            for (int j = 0; j < n; ++j) {
                if ((i & (1 << j)) > 0) {
                    sum += arr[j];
                }
            }
            if (mep.find(sum) != mep.end()) {
                vector<int> tmp = mep[sum];
                for (int j = 0; j < tmp.size(); ++j){
                    if ((tmp[j] & i) == 0) {
                        ans[0] = tmp[j];
                        ans[1] = i;
                        break;
                    }
                }
                if (ans[0] != -1 && ans[1] != -1) break;
            } else {
                mep[sum].push_back(i);
            }
        }
        cout << "Case #" << ++tc << ":\n";
        if (ans[0] == -1 && ans[2] == -1) {
            cout << "Impossible\n";
        } else {
            for (int j = 0; j < 2; ++j)
                output(ans[j]);
        }
        mep.clear();
    }
    return 0;
}