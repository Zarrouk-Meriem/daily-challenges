#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long> vl;
typedef pair<int, int> pi;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i, a, b) for (int i = a; i < b; i++)
const int MOD = 10e7 + 7;

void yes() { cout << "YES\n"; }
void no() { cout << "NO\n"; }
void init()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
}

void solve()
{
    int n, m, x;
    cin >> n;
    long p[n];
    int a[n];
    int b[n];
    vector<set<long> > price(3);

    REP(i, 0, n) { cin >> p[i]; }
    REP(i, 0, n) { cin >> a[i]; }
    REP(i, 0, n) { cin >> b[i]; }
    REP(i, 0, n)
    {
        price[a[i] - 1].insert(p[i]);
        price[b[i] - 1].insert(p[i]);
    }
    cin >> m;
    while (m--)
    {
        cin >> x;
        long result =*price[x - 1].begin();
        cout << (result !=0 ? result : -1) << " ";
        price[0].erase(result);
        price[1].erase(result);
        price[2].erase(result);

    }
}

int main()
{
    init();
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
