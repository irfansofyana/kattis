#include <bits/stdc++.h>
using namespace std;

int arr[5];

void output() {
    for (int j = 0 ; j < 5; ++j){
        cout << arr[j];
        cout << (j == 4 ? '\n' : ' ');
    }
}

bool isStop() {
    for (int i = 0; i < 5; ++i) {
        if (arr[i] != i + 1) return false;
    }
    return true;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    for (int i = 0; i < 5; ++i) 
        cin >> arr[i];
    
    while (1) {
        for (int i = 0; i < 4; ++i) {
            if (arr[i] > arr[i+1]) {
                swap(arr[i], arr[i+1]);
                output();
            }
        }
        if (isStop()) break;
    }
    return 0;
}