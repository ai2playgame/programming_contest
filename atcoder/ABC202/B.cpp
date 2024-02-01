#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for (ll i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)
#define PRINT(item) cout << (item) << endl;
#define PRINT_VEC(V) for (auto v : (V)) { cout << v << ' '; } cout << '\n';

const int MOD = 1000000007;
/* cout << fixed << setprecision(10) << decimal << endl; */

int main() {
    /* code */
    string s;
    cin >> s;
    reverse(s.begin(), s.end());
    for (auto c : s)
    {
        if (c == '6') c = '9';
        else if (c == '9') c = '6';
        cout << c;
    }
    cout << endl;
    return 0;
}
