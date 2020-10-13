#include <bits/stdc++.h>
using namespace std;

int t, n;
string s;
set<string> st;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 0; i < n; ++i) {
            cin >> s;
            st.insert(s);  
        }
        cout << st.size() << '\n';
        st.clear();
    }
    return 0;
}