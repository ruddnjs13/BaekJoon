#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> paper;

int answers[2] = { 0,0 };

void CountSquare(int x, int y, int size) {

    int first = paper[x][y] > 0 ? 1 : 0;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (first != paper[x + i][y + j]) {
                CountSquare(x, y, size / 2);
                CountSquare(x + size / 2, y, size / 2);
                CountSquare(x, y + size / 2, size / 2);
                CountSquare(x + size / 2, y + size / 2, size / 2);
                return;
            }
        }
    }

    answers[first]++;
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin >> n;

    paper = vector<vector<int>>(n, vector<int>(n,0));

    for (int i = 0; i < n; i++) {
        paper[i] = vector<int>(n,0);
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> paper[i][j];
        }
    }

    CountSquare(0, 0, n);

    cout << answers[0] << '\n' << answers[1];

}