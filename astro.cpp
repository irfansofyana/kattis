#include <bits/stdc++.h>
using namespace std;

pair<int,int> waktu[2], diff[2];
pair<int,pair<int,int> > curr[2];
vector<pair<int,pair<int,int> > > arr[2];
map<pair<int,pair<int,int> >, bool> done[2], ori[2];
string days[] = {
    "Saturday",
    "Sunday",
    "Monday",
    "Tuesday",
    "Wednesday",
    "Thursday",
    "Friday"
};

pair<int,pair<int, int> > newTime(pair<int,pair<int,int> > curr, pair<int,int> diff) {
    curr.second.second += diff.second;
    curr.second.first += diff.first;
    curr.second.first += (curr.second.second / 60);
    curr.second.second %= 60;
    curr.first += curr.second.first / 24;
    curr.second.first %= 24;

    return curr;
}

pair<int,pair<int,int> > findMinimal(pair<int,pair<int,int> > a, pair<int,pair<int,int> > b) {
    if (a < b) return a;
    else return b;
}

int main(){
    for (int i = 0; i < 2; ++i) 
        scanf("%02d:%02d", &waktu[i].first, &waktu[i].second);
    for (int i = 0; i < 2; ++i) 
        scanf("%02d:%02d", &diff[i].first, &diff[i].second);
    
    for (int i = 0; i < 2; ++i) {
        curr[i] = make_pair(0, waktu[i]);
        pair<int,pair<int,int> > tmp;
        for (;;) {
            tmp = curr[i];
            tmp.first %= 7;
            
            ori[i][curr[i]] = true;
            done[i][tmp] = true;
            arr[i].push_back(curr[i]);

            curr[i] = newTime(curr[i], diff[i]);
            tmp = curr[i];
            tmp.first %= 7;

            if (done[i].find(tmp) != done[i].end()) {
                break;
            }
        }
    }
    pair<int, pair<int,int> > ans[2];
    pair<int, pair<int,int> > notFoundVal = make_pair(-1, make_pair(-1, -1));

    for (int i = 0; i < 2; ++i) {
        ans[i] = notFoundVal;
        for (int j = 0; j < arr[i].size(); ++j){
            pair<int, pair<int,int> > tmp = arr[i][j];
            if (ori[1-i].find(tmp) != ori[1-i].end()) {
                ans[i] = tmp;
                break;
            }
        }
    }

    if (ans[0] == notFoundVal && ans[1] == notFoundVal) {
        printf("Never\n");
    } else if (ans[0] == notFoundVal) {
        cout << days[ans[1].first%7] << '\n';
        printf("%02d:%02d\n", ans[1].second.first, ans[1].second.second);
    } else if (ans[1] == notFoundVal) {
        cout << days[ans[0].first%7] << '\n';
        printf("%02d:%02d\n", ans[0].second.first, ans[0].second.second);
    } else {
        pair<int,pair<int,int> > mini = findMinimal(ans[0], ans[1]);
        cout << days[mini.first%7] << '\n';
        printf("%02d:%02d\n", mini.second.first, mini.second.second);
    }
    return 0;
}