#include <iostream>
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    string input;
    for (int i = 0; i < t; i++) {
        cin >> input;
        if (input.size() <= 9 && input.size() >= 6)
            cout << "yes" << '\n';
        else
            cout << "no" << "\n";
    }
}