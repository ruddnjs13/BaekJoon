#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int a, b, c;

    cin >> a >> b >> c;

    if (a + b == c)
        cout << "correct!";
    else
        cout << "wrong!";

    return 0;
}
