#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pll pair<ll, ll>
#define vl vector<ll>
#define vpl vector<pair<ll, ll>>
#define mll map<ll, ll>
#define pb push_back
#define f(i, a, b) for (ll i = a; i < b; ++i)
#define rev(i, a, b) for (ll i = a; i >= b; --i)
#define print(x) cout << x << endl
#define ct(x) cout << x << " "
#define endl '\n'
#define F first
#define S second
#define gcd __gcd
#define setbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)
#define to(n) to_string(n)
#define mod 1000000007
#define mex 100005

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n, s;
    cin >> n >> s;

    ll A[n];
    f(i, 0, n)
    {
        cin >> A[i];
    }

    vl dp(s + 1, 0);
    dp[0] = 1;

    f(i, 1, s + 1)
    {
        f(j, 1, n + 1)
        {
            if (A[j - 1] <= i)
            {
                dp[i] += dp[i - A[j - 1]];
                dp[i] %= mod;
            }
        }
    }

    print(dp[s]);

    return 0;
}