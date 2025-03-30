#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    string input, input1;

    cin >> input;
    cin >> input1;
    if (input1.size() <= input.size()) {
        cout << "go";
    }
    else {
        cout << "no";
    }
    return 0;
}