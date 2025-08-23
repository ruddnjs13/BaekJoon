#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int a, b, c;

    int prev_minL, prev_minM, prev_minR;
    int prev_maxL, prev_maxM, prev_maxR;

    cin >> a >> b >> c;
    prev_minL = prev_maxL = a;
    prev_minM = prev_maxM = b;
    prev_minR = prev_maxR = c;

    for (int i = 1; i < n; i++) {
        cin >> a >> b >> c;

        int minL = min(prev_minL, prev_minM) + a;
        int minM = min({prev_minL, prev_minM, prev_minR}) + b;
        int minR = min(prev_minM, prev_minR) + c;

        int maxL = max(prev_maxL, prev_maxM) + a;
        int maxM = max({prev_maxL, prev_maxM, prev_maxR}) + b;
        int maxR = max(prev_maxM, prev_maxR) + c;

        prev_minL = minL; prev_minM = minM; prev_minR = minR;
        prev_maxL = maxL; prev_maxM = maxM; prev_maxR = maxR;
    }

    cout << max({prev_maxL, prev_maxM, prev_maxR}) << " "
         << min({prev_minL, prev_minM, prev_minR}) << "\n";

    return 0;
}
