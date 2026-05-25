#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long x, y, k;
        cin >> x >> y >> k;

        long long a = (x + k - 1) / k; // ceil(x / k)
        long long b = (y + k - 1) / k; // ceil(y / k)

        cout << max(2 * a - 1, 2 * b) << '\n';
    }

    return 0;
}