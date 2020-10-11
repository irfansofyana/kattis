#include <bits/stdc++.h>
using namespace std;

int s, n, m;
int arr[1005];
vector<pair<int,int> > collect[2];
pair<int,int> flag[1005];

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); 
    cin >> s >> n >> m;
    for (int i = 0; i < s; ++i) {
        cin >> arr[i];
        flag[i] = make_pair(-1, -1);
    }
    int i = 0;
    while (i < s - 1) {
        int j = i + 1;
        if (j < s && arr[j] > arr[i]) {
            while (j < s && arr[j] > arr[j-1]) {
                ++j;    
            }
            collect[0].push_back(make_pair(i, j-1));
            i = j - 1;
        } else if (j < s && arr[j] < arr[i]) {
            while (j < s && arr[j] < arr[j-1]) {
                ++j;
            }
            collect[1].push_back(make_pair(i, j-1));
            i = j - 1;
        }
    }
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < collect[i].size(); ++j) {
            pair<int,int> tmp = collect[i][j];
            flag[tmp.first] = make_pair(i, tmp.second);
        }
    }   

    int ans1 = 0, ans2 = 0;
    for (int i = 0; i < s; ++i) {
        if (flag[i].first == -1) continue;
        if (flag[i].first == 0) {
            if (flag[i].second - i + 1 >= n) {
                int idx = flag[i].second;
                if (flag[idx].first == 1 && flag[idx].second - idx + 1 >= n) {
                    // cout << 0 << " " << i << " " << idx << " " << flag[idx].first << endl;
                    ++ans1;
                }
            }
        }
        else {
            if (flag[i].second - i + 1 >= m) {
                int idx = flag[i].second;
                if (flag[idx].first == 0 && flag[idx].second - idx + 1 >= m) {
                    // cout << 1 << " " << i << " " << idx << " " << flag[idx].first << endl;
                    ++ans2;
                }
            }
        }
    }

    cout << ans1 << " " << ans2 << '\n';
    return 0;
}