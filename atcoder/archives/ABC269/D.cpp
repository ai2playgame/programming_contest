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
    const int dx[6] = {-1, -1, 0, 0, 1, 1};
    const int dy[6] = {-1, 0, -1, 1, 0, 1};

    int n;
    cin >> n;
    using P = pair<int, int>;
    set<P> u;
    REP(i, n)
    {
        int x, y;
        cin >> x >> y;
        u.insert(make_pair(x, y));
    }

    ll ans = 0;
    while (u.size() > 0)
    {
        P p = *u.begin();
        u.erase(p);
        ans++;
        stack<P> stack;
        stack.push(p);
        while (stack.size() > 0)
        {
            P startP = stack.top();
            stack.pop();

            for (int d = 0; d < 6; d++)
            {
                P newP = make_pair(startP.first + dx[d], startP.second + dy[d]);
                if (u.find(newP) == u.end())
                    continue;
                stack.push(newP);
                u.erase(newP);
            }
        }
    }

    PRINT(ans);
    return 0;
}
