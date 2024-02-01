#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define FOR(i, a, b) for (ll i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)
#define PRINT(item) cout << (item) << endl;
#define PRINT_VEC(V) \
    for (auto v : (V)) \
        cout << v << ' '; \
    cout << '\n';

const int MOD = 1000000007;
/* cout << fixed << setprecision(10) << decimal << endl; */

int main()
{
    ll n, k;
    cin >> n >> k;

    REP(i, k)
    {
        if (n % 200 == 0)
            n /= 200;
        else
            n = n * 1000 + 200;

    }

    PRINT(n);
    return 0;
}
