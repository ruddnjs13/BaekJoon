#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, answer = 0;

    cin >> n;

    for (int i = 0; i < 3; i++)
    {
        int a;

        cin >> a;

        answer += min(a, n);
    }

    cout << answer;

    return 0;
}
