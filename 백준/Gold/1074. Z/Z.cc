#include <iostream>
#include <cmath>

int n, r, c;
int ans = 0;


using namespace std;
void f(int x, int y, int size) 
{
    if (c == x && r == y) 
    {
        cout << ans;
        return;
    }
    else if (c < x + size && r < y + size && c >= x && r >= y) {
       
        f(x, y, size / 2);
        f(x + size / 2, y, size / 2);
        f(x, y + size / 2, size / 2);
        f(x + size / 2, y + size / 2, size / 2);
    }
    else 
        ans += size * size;
}
int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> r >> c;
    f(0, 0, pow(2, n));
    return 0;
}