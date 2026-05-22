#include <bits/stdc++.h>
using namespace std;

static vector<int> primes;

void sieve(int limit = 200000) {
    vector<bool> isPrime(limit + 1, true);
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i <= limit; ++i) {
        if (isPrime[i]) {
            for (int j = i * i; j <= limit; j += i)
                isPrime[j] = false;
        }
    }
    for (int i = 2; i <= limit; ++i) {
        if (isPrime[i]) primes.push_back(i);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sieve();

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        for (int i = 0; i < n; ++i) {
            long long x = 1LL * primes[i] * primes[i + 1];
            cout << x << ' ';
        }
        cout << '\n';
    }
    return 0;
}