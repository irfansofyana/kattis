#include <bits/stdc++.h>
using namespace std;

int main(){
    set<int> st;

    for (int i = 0; i < 10; ++i){
        int x; cin >> x;
        st.insert(x%42);
    }

    cout << (int)st.size() << endl;
}