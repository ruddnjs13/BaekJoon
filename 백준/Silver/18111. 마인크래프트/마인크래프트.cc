#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m, b, min = 2147483647, minFloor = 0;

    cin >> n >> m >> b;

    vector<int> ground(n * m, 0);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> ground[m * i + (j+1)-1];
        }
    }

    for (int i = 0; i <= 256; i++) {
        int count = 0; 

        int needBlock = 0, hasBlock = b;

        for (int j = 0; j < n * m; j++) {
            if (i == ground[j])
                continue;
            else if (i > ground[j]) {
                needBlock += i - ground[j];
                count += i - ground[j];
            }
            else {
                hasBlock += ground[j] - i;
                count += (ground[j] - i) * 2;
            }
        }
        if (count <= min && ((hasBlock - needBlock) >= 0)) {
            min = count;
            minFloor = i;
        }
    }
    cout << min << ' ' << minFloor;
}