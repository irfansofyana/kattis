#include <bits/stdc++.h>
using namespace std;

const int MAXN = 200001;

int N, t;
int arr[MAXN];

void action1() {
    cout << 7 << '\n';
}

void action2() {
    if (arr[0] > arr[1]) cout << "Bigger\n";
    else if (arr[0] == arr[1]) cout << "Equal\n";
    else cout << "Smaller\n";
}

void action3() {
    int b[] = {arr[0], arr[1], arr[2]};
    sort(b, b+3);
    cout << b[1] << '\n';
}

void action4() {
    long long sum = 0LL;
    for (int i = 0; i < N; ++i) {
        sum += arr[i];
    }
    cout << sum << '\n';
}

void action5() {
    long long sum = 0LL;
    for (int i = 0; i < N; ++i) {
        if (arr[i] % 2 == 0)
            sum += arr[i];
    }
    cout << sum << '\n';
}

void action6() {
    for (int i = 0; i < N; ++i) {
        char chr = char(arr[i] % 26 + 'a');
        cout << chr;
    }
    cout << '\n';
}

void action7(){
    int i = 0;
    map<int, bool> udah;
    while (i != N-1) {
        udah[i] = true;
        if (i < 0 || i > N-1) {
            cout << "Out\n";
            return;
        } 
        i = arr[i];
        if (udah.find(i) != udah.end()) {
            cout << "Cyclic\n";
            return;
        }
    }
    cout << "Done\n";
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> N >> t;
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
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
        case 6:
            action6();
            break;
        case 7:
            action7();
            break;
    }
    return 0;
}