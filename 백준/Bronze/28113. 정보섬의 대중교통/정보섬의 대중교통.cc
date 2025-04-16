#include <iostream>
#include <cmath>
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b, n;
    cin >> n >> a >> b;


    if (n <= b && b == a) {
        cout << "Anything";
    }
    else if (n <= b && b < a) {
        cout << "Subway";
    }
    else {
        cout << "Bus";
    }
    return 0;
}