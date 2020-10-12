#include <bits/stdc++.h>
using namespace std;

int h;
long long bil;
string s, tmp;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    getline(cin, tmp);
    if (tmp.find(' ') != -1) {
        int space = tmp.find(' ');
        h = stoi(tmp.substr(0, space));
        s = tmp.substr(space + 1, tmp.size()-(space + 1));
    } else {
        h = stoi(tmp);
    }

    bil = 1;
    for (int i = 0; i < (int)s.size(); ++i) {
        if (s[i] == 'L') {
            bil <<= 1;
        } else {
            bil <<= 1;
            ++bil;
        }
    }
    cout << (1LL << (h + 1)) - bil << '\n';
    return 0;
}