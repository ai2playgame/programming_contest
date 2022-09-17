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
    const int dx[6] = {-1, -1, 0, 0, 1, 1};
    const int dy[6] = {-1, 0, -1, 1, 0, 1};

    int n;
    cin >> n;
    vector<pair<int, int>> u(n);
    REP(i, n)
    {
        int x, y;
        cin >> x >> y;
        u[i] = make_pair(x, y);
    }


    return 0;
}
