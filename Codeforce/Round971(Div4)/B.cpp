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

        vector<int> pos(n);

        for (int i = 0; i < n; i++) {
            string s;
            cin >> s;  // 4 characters
            for (int j = 0; j < 4; j++) {
                if (s[j] == '#') {
                    pos[i] = j + 1; // columns are 1-based
                }
            }
        }

        for (int i = n - 1; i >= 0; i--) {
            cout << pos[i] << ' ';
        }
        cout << '\n';
    }

    return 0;
}