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
    /* code */
    ll n;
    cin >> n;
    vector<ll> res;
    res.push_back(0);

    for (int d = 0; d < 60; d++)
    {
        if (n & (1ll << d))
        {
            int size = res.size();
            for (int i = 0; i < size; i++)
            {
                res.push_back(res[i] | (1ll << d));
            }
        }
    }

    for (ll i = 0; i < res.size(); ++i)
    {
        PRINT(res[i]);
    }

    return 0;
}
