#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i, a, b) for (int i = a; i < b; i++)
const int MOD = 10e7 + 7;

void yes() { cout << "YES\n"; }
void no() { cout << "NO\n"; }
void init() {
    cin.tie(0);
    cin.sync_with_stdio(0);
}

int mask(int x) {
    int m = 0;
    int n = 1;
    while (x > 0) {
        int d = x % 10;
        if (d == 7 || d == 4) {
            m += d * n;
            n *= 10;
        }
        x = x / 10;
    }
    return m;
}
void solve() {
    int a, b;
    cin >> a >> b;
    int c = a + 1;

    while (mask(c) != b) {
        c++;
    }
    cout << c << "\n";
}

int main() {
    init();
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
