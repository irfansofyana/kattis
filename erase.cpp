#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string a, b;
    cin >> n;
    cin >> a >> b;
    if (n%2 == 1) {
        for (int i = 0; i < (int)a.size(); ++i){
            if (b[i] == a[i]) {
                cout << "Deletion failed\n";
                return 0;
            }
        }
        cout << "Deletion succeeded\n";
    } else {
        cout << (a == b ? "Deletion succeeded\n" : "Deletion failed\n");
    }
    return 0;
}