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
    int n;
    cin >> n;
    vector<ll> l(n);
    REP(i, n)
        cin >> l[i];

    sort(l.begin(), l.end(), less<ll>());

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = i + 2; k < n; k++)
            {
                auto a = l[i];
                auto b = l[j];
                auto c = l[k];
                if (a + b < c)
                    ans++;
            }
        }
    }

    PRINT(ans);

    return 0;
}
