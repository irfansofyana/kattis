#include <bits/stdc++.h>
using namespace std;

int n;
string code, guess;
int frek[2][30];

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> n >> code >> guess;
    for (int i = 0; i < 2; ++i){
        for (int j = 0; j < n; ++j){
            char chr;
            if (i == 0) chr = code[j];
            else chr = guess[j];
            frek[i][chr - 'A']++;
        }
    }

    int r = 0;
    for (int i = 0; i < n; ++i) {
        if (code[i] == guess[i]) {
            ++r;
        }
    }
    int s = 0;
    for (int i = 0; i < 26; ++i){
        s += min(frek[0][i], frek[1][i]);
    }

    cout << r << " " << s-r << '\n';
    return 0;
}