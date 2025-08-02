#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long A, B, C;
    cin >> A >> B >> C;

    long long result = 1;
    long long base = A % C;

    while (B > 0) {
        if (B % 2 == 1) { 
            result = (result * base) % C;
        }
        base = (base * base) % C;
        B /= 2;
    }

    cout << result << "\n";
    return 0;
}
