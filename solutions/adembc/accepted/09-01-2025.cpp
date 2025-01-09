#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef vector<int> vi;
#define inf 1000000007
 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, k; cin >> n >> k;
    int s[n+1], index = 1, sum = 0; s[0] = 0; 
    for(int i = 0; i<n; i++)
    {
        int x; cin >> x;
        sum += x;
        s[i+1] = sum;
    }
    for(int i = k; i<=n; i++)
    {
        if(s[i] - s[i-k] < sum)
        {
            sum = s[i] - s[i-k];
            index = i-k+1;
        }
    }
    cout << index << '\n';
}