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
    vector<int> a(3);
    REP(i, 3)
        cin >> a[i];
    sort(a.begin(), a.end());

    if (abs(a[1] - a[0]) == abs(a[2] - a[1]))
    {
        PRINT("Yes");
    }
    else
    {
        PRINT("No");
    }
}
