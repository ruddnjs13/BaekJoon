#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    
    int n, t, p, count=0;
    cin >> n;
    int inputs[6] = { 0, };

    cin >> inputs[0] >> inputs[1] >> inputs[2] >> inputs[3] >> inputs[4] >> inputs[5];

    cin >> t >> p;

    for (int i = 0; i < 6; i++) {
        if (inputs[i] == 0) {
            continue;
        }
        else {
            if (inputs[i] <= t) {
                count++;
            }
            else if (inputs[i] % t > 0) {
                count += inputs[i] / t + 1;
            }
            else {
                count += inputs[i] / t;
            }
        }
    }

    cout << count << '\n' << n / p << " " << n % p;
    return 0;
}
