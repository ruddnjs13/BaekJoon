#include <iostream>
#include <map>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t, n, answer;
    string name, type;
    cin >> t;

    for (int i = 0; i < t; i++) {
        map<string, int> cloths;

        cin >> n;

        for (int j = 0; j < n; j++) {
            cin >> name >> type;
            cloths[type]++;
        }

        answer = 1;

        for (auto itr = cloths.begin(); itr != cloths.end(); itr++) {
            answer *= itr->second + 1;
        }
       
        cout << --answer << '\n';
    }
}