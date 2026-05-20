#include <bits/stdc++.h>
using namespace std;

// Check if subarray a[l..r] is a palindrome
bool isPalindrome(vector<int>& a, int l, int r) {
    while (l < r) {
        if (a[l] != a[r]) return false;
        l++; r--;
    }
    return true;
}

// Compute MEX of subarray a[l..r]
int mex(vector<int>& a, int l, int r, int n) {
    vector<bool> present(n + 1, false);
    for (int i = l; i <= r; i++)
        present[a[i]] = true;
    int m = 0;
    while (m <= n && present[m]) m++;
    return m;
}

int solve() {
    int n;
    cin >> n;
    vector<int> a(2 * n);
    for (int& x : a) cin >> x;

    int best = 0;

    // Expand around center for all palindromic subarrays
    for (int i = 0; i < 2 * n; i++) {
        // Odd length
        int l = i, r = i;
        while (l >= 0 && r < 2 * n && a[l] == a[r]) {
            best = max(best, mex(a, l, r, n));
            l--; r++;
        }
        // Even length
        l = i; r = i + 1;
        while (l >= 0 && r < 2 * n && a[l] == a[r]) {
            best = max(best, mex(a, l, r, n));
            l--; r++;
        }
    }

    return best;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) cout << solve() << '\n';
    return 0;
}