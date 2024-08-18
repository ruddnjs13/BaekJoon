#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

bool cmp(pair<int, string> a, pair<int, string> b)
{
    if (a.first == b.first) {
        return 0;
    }
    else
        return a.first < b.first;
}

int main() {
    
    int n;
    cin >> n;

    vector <pair<int, string>> peopleList(n);


    for (int i = 0; i < n; i++) {
        cin >> peopleList[i].first >> peopleList[i].second;
    }

    stable_sort(peopleList.begin(), peopleList.end(),cmp);

    for (int i = 0; i < n; i++) {
        cout << peopleList[i].first << " " << peopleList[i].second << '\n';
    }

    return 0;
}