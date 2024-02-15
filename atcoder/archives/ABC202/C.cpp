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
    int n;
    cin >> n;
    vector<int> A(n), B(n), C(n);
    REP(i, n) { cin >> A[i]; A[i]--; }
    REP(i, n) { cin >> B[i]; B[i]--; }
    REP(i, n) { cin >> C[i]; C[i]--; }

    // B[C[j]]に、1~nまでの整数が各何回登場するか数える O(n)
    vector<int> count(n);
    REP(j, n)
    {
        count[B[C[j]]] += 1;
    }

    ll ans = 0;
    REP(i, n)
    {
        ans += count[A[i]];
    }
    PRINT(ans);

    return 0;
}
