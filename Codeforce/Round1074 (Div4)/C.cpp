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

        unordered_set<long long> s;

        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;
            s.insert(x);
        }

        int ans = 0;

        for (long long x : s) {

            // start of a sequence
            if (!s.count(x - 1)) {

                int len = 1;
                long long cur = x;

                while (s.count(cur + 1)) {
                    cur++;
                    len++;
                }

                ans = max(ans, len);
            }
        }

        cout << ans << '\n';
    }

    return 0;
}