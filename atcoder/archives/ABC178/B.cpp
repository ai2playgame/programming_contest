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
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    ll result = INT64_MIN;
    result = max(result, a * c);
    result = max(result, a * d);
    result = max(result, b * c);
    result = max(result, b * d);

    PRINT(result);
    return 0;
}

