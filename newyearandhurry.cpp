#include <iostream>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    int time_left = 240 - k;
    int solved = 0;
    int spent = 0;

    for (int i = 1; i <= n; i++) {
        if (spent + 5 * i > time_left) break;
        spent += 5 * i;
        solved++;
    }

    cout << solved << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}