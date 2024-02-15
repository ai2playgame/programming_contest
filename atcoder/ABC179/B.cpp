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
    int zoro_count = 0;
    REP(i, N) {
        int D1, D2;
        cin >> D1 >> D2;
        if (D1 == D2) {
            zoro_count++;
            if (zoro_count >= 3)
            {
                PRINT("Yes");
                return 0;
            }
        }
        else
        {
            zoro_count = 0;
        }
    }

    PRINT("No");
    return 0;
}
