#include <bits/stdc++.h>
using namespace std;

const int MAXN = 200001;

int N, t;
int arr[MAXN], tmp[MAXN];

void action1() {
    sort(tmp, tmp + N);
    map<int, bool> mep;
    for (int i = 0; i < N; ++i) {
        mep[tmp[i]] = true;
    }
    for (int i = 0; i < N; ++i) {
        if (mep.find(7777 - tmp[i]) != mep.end()) {
            cout << "Yes\n";
            return;
        }
    }
    cout << "No\n";
}

void action2() {
    set<int> st;
    bool unique = true;
    for (int i = 0; i < N && unique; ++i) {
        if (st.find(tmp[i]) != st.end()) {
            unique = false;
        } else {
            st.insert(tmp[i]);
        }
    }
    cout << (unique ? "Unique" : "Contains duplicate") << '\n';
}

void action3() {
    map<int,int> frek;
    for (int i = 0; i < N; ++i) {
        frek[tmp[i]]++;
    }
    int ans = -1;
    for (map<int,int>::iterator it = frek.begin(); it != frek.end(); ++it) {
        if (it->second > N/2) {
            ans = it->first;
            break;
        }
    }
    cout << ans << '\n';
}

// 0 1 2 3 4 5
void action4() {
    sort(tmp, tmp + N);
    if (N % 2 == 1) {
        cout << tmp[N/2] << '\n';
    } else {
        cout << tmp[(N/2) - 1] << " " << tmp[N/2] << '\n';
    }
}

void action5() {
    vector<int> ans;
    sort(tmp, tmp + N);
    for (int i = 0; i < N; ++i) {
        if (tmp[i] >= 100 && tmp[i] <= 999) {
            ans.push_back(tmp[i]);
        }
    }
    for (int i = 0; i < (int)ans.size(); ++i) {
        cout << ans[i];
        cout << (i == (int)ans.size() - 1 ? "\n" : " ");
    }
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> N >> t;
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
        tmp[i] = arr[i];
    }

    switch (t) {
        case 1:
            action1();
            break;
        case 2:
            action2();
            break;
        case 3:
            action3();
            break;
        case 4:
            action4();
            break;
        case 5:
            action5();
            break;
    }   
    return 0;
}