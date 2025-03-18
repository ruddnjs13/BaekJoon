#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m, k;

    cin >> n >> m;
    int** procession1 = new int*[n];
    for (int i = 0; i < n; i++) {
        procession1[i] = new int[m];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> procession1[i][j];
        }
    }

    cin >> m >> k;
    int** procession2 = new int*[m];
    for (int i = 0; i < m; i++) {
        procession2[i] = new int[k];
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < k; j++) {
            cin >> procession2[i][j];
        }
    }

    int** answer = new int* [m];
    for (int i = 0; i < k; i++) {
        answer[i] = new int[k];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            int sum = 0;
            for (int k = 0; k < m; k++) {
                sum += procession1[i][k] * procession2[k][j];
            }
            cout << sum << ' ';
        }
        cout << '\n';
    }
}