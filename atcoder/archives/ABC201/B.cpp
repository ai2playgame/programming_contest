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
    int n;
    cin >> n;
    using P = pair<string, ll>;
    vector<P> st(n);
    REP(i, n)
    {
        string s;
        ll t;
        cin >> s >> t;
        st[i] = make_pair(s, t);
    }

    sort(st.begin(), st.end(),
         [](P lhs, P rhs)
         { return lhs.second > rhs.second; });

    PRINT(st[1].first);

    return 0;
}
