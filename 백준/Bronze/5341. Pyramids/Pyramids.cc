#include <iostream>
using namespace std;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int input;

    while (1) {
        cin >> input;
        if (input == 0) break;

        int answer = 0;
        for (int i = 1; i <= input; i++)
            answer += i;

        cout << answer << '\n';
    }
}