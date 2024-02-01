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
    string s;
    cin >> s;

    int count = 0;

    if (s == "SSS")
        count = 0;
    else if (s == "SSR")
        count = 1;
    else if (s == "SRS")
        count = 1;
    else if (s == "SRR")
        count = 2;
    else if (s == "RSS")
        count = 1;
    else if (s == "RSR")
        count = 1;
    else if (s == "RRS")
        count = 2;
    else if (s == "RRR")
        count = 3;

    PRINT(count);

    return 0;
}
