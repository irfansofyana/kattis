#include <bits/stdc++.h>
using namespace std;

stack<int> st;
int n;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    for (int i = 0; i < n; ++i){
        int x;
        cin >> x;
        if (!st.empty()) {
            int a = st.top();
            if ((a + x) % 2 == 0) {
                st.pop();
            } else {
                st.push(x);
            }
        } else {
            st.push(x);
        }
    }
    int ans = 0;
    while (!st.empty()) {
        ans++;
        st.pop();
    }
    cout << ans << '\n';
    return 0;
}