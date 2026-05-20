#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> both, only2, only3, other;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;

            bool div2 = (x % 2 == 0);
            bool div3 = (x % 3 == 0);

            if (div2 && div3) {
                both.push_back(x);
            } else if (div2) {
                only2.push_back(x);
            } else if (div3) {
                only3.push_back(x);
            } else {
                other.push_back(x);
            }
        }

        for (int x : both) cout << x << ' ';
        for (int x : only2) cout << x << ' ';
        for (int x : other) cout << x << ' ';
        for (int x : only3) cout << x << ' ';
        cout << '\n';
    }

    return 0;
}