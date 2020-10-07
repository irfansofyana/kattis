#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; int bil;
    cin >> s >> bil;
    if (s == "OCT" && bil == 31) cout << "yup\n";
    else if (s == "DEC" && bil == 25) cout << "yup\n";
    else cout << "nope\n";
    return 0;
}