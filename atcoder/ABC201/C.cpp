#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define FOR(i, a, b) for (ll i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)
#define PRINT(item) cout << (item) << endl;
#define PRINT_VEC(V)      \
    for (auto v : (V))    \
        cout << v << ' '; \
    cout << '\n';

const int MOD = 1000000007;
/* cout << fixed << setprecision(10) << decimal << endl; */

int main()
{
    string s;
    cin >> s;

    ll ans = 0;
    REP(i, 10000)
    {
        vector<bool> hasFlag(10);
        int x = i;
        for (int j = 0; j < 4; j++)
        {
            hasFlag[x % 10] = true;
            x /= 10;
        }

        bool ok = true;
        REP(j, 10)
        {
            if (s[j] == 'o')
            {
                if (!hasFlag[j])
                {
                    ok = false;
                    break;
                }
            }
            if (s[j] == 'x')
            {
                if (hasFlag[j])
                {
                    ok = false;
                    break;
                }
            }
        }

        if (ok)
        {
            ans++;
        }
    }

    PRINT(ans);

    return 0;
}
