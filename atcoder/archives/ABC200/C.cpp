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
    int N;
    cin >> N;
    vector<ll> A(N);
    vector<ll> B(200, 0);
    REP(i, N) {
        cin >> A[i];
        B[A[i] % 200]++;
    }

    ll ans = 0;
    REP(k, 200) {
        ans += (B[k] * (B[k] - 1)) / 2;
    }

    PRINT(ans)

    return 0;
}
