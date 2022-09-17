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
    vector<string> s(10);
    REP(i, 10) cin >> s[i];

    bool isStart;
    ll a = 10, b = 1, c = 10, d = 1;
    REP(i, 10)
    {
        REP(j, 10)
        {
            if (s[i][j] == '#')
            {
                a = min(a, i + 1);
                b = max(b, i + 1);
                c = min(c, j + 1);
                d = max(d, j + 1);
            }
        }
    }

    cout << a << ' ' << b << endl;
    cout << c << ' ' << d << endl;
    return 0;
}
