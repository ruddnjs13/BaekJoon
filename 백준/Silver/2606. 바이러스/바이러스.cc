#include <iostream>
#include <string>
using namespace std;

int ** graph;
bool* checkList;

void search(int n,int length);

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t, n, num1, num2;
    cin >> t;
    checkList = new bool[t] {false, };

    graph = new int* [t];
    for (int i = 0; i < t; i++) {
        graph[i] = new int[t] {0, };
    }

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num1 >> num2;
        graph[num1-1][num2-1] = 1;
        graph[num2-1][num1-1] = 1;
    }

    search(0, t);

    int cnt = 0;

    for (int i = 0; i < t; i++) {
        if (checkList[i]) {
            cnt++;
        }
    }
    if (cnt <= 0)
        cnt++;

    cout << cnt-1;
}

void search(int n, int length)
{
    for (int i = 0; i < length; i++) {
        if (graph[n][i] > 0) {
            if (!checkList[i]) {
                checkList[i] = true;
                search(i, length);
            }
        }
    }
}
