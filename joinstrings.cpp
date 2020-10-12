#include <bits/stdc++.h>
using namespace std;

const int MAXN = 100002;

int n;
string arr[MAXN];
int neks[MAXN], prv[MAXN];;

int findLast(int x){
    return (neks[x] == x ? x : neks[x] = findLast(neks[x]));
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        neks[i] = i;
        prv[i] = i;
    }
    for (int i = 0; i < n-1; ++i) {
        int a, b; cin >> a >> b;
        --a; --b;
        
        int lastA = findLast(a);
        neks[lastA] = b;
        prv[b] = lastA;
    }

    int _first = -1;
    for (int i = 0; i < n; ++i) {
        if (i != prv[i] ) neks[prv[i]] = i;
        if (prv[i] == i) {
            _first = i;
        }
    }

    while (_first != neks[_first]) {
        cout << arr[_first];
        _first = neks[_first];
    }

    cout << arr[_first] << '\n';

    return 0;
}