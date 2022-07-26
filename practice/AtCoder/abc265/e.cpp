/*
 * @uni_kakurenbo
 * https://github.com/uni-kakurenbo/competitive-programming-workspace
 *
 * CC0 1.0  http://creativecommons.org/publicdomain/zero/1.0/deed.ja
 */
/* #language C++ GCC */
/* #region tmplate */
#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL_JUDGE
    #include<debug>
    #define debug(...) Debug::debug(Debug::split(#__VA_ARGS__), 0, __LINE__, __VA_ARGS__)
    #define DEBUG(...) do { Debug::DEBUG(nullptr, "\033[3;35m#" + to_string(__LINE__) + "\033[m  "); Debug::DEBUG(__VA_ARGS__); Debug::DEBUG(nullptr, "\033[m\n"); } while(0);
#else
    #define debug(...) { ; }
    #define DEBUG(...) { ; }
#endif

#define INF32 2147483647
#define INF64 9223372036854775807LL

#define until(...) while(!(__VA_ARGS__))

#define REP(i,n) for(int i=0, i##_length=int(n); i<i##_length; ++i)
#define REPD(i,n) for(int i=(n)-1; i>=0; --i)
#define LOOP(n) REP(_$, (n))
#define FOR(i,l,r) for(ll i=(l), i##_last=ll(r); i<=i##_last; ++i)
#define FORD(i,l,r) for(ll i=(l), i##_last=ll(r); i>=i##_last; --i)

#define ITRP(x,v) for(auto x : (v))
#define ITRR(x,v) for(auto &x : (v))
#define ITR(x,v) for(const auto &x : (v))
#define ITRMP(x,y,v) for(auto [x, y] : (v))
#define ITRMR(x,y,v) for(auto &[x, y] : (v))
#define ITRM(x,y,v) for(const auto [x, y] : (v))

#define ALL(x) begin((x)),end((x))
#define RALL(x) rbegin((x)),rend((x))

#define F$ first
#define S$ second

using ll = long long;
using ull = unsigned long long;
using ld = long double;

constexpr char ln = '\n';

template<class T1, class T2> inline auto mod(T1 x, T2 r) { return (x%r+r)%r; }

template<class T> inline bool chmax(T &a, T b) { return (a<b ? a=b, true : false); }
template<class T> inline bool chmin(T &a, T b) { return (a>b ? a=b, true : false); }
/* #endregion */

#include <atcoder/modint>

using mint = atcoder::modint998244353;

using Pos = pair<int,int>;

signed main() {
    int n, m; cin >> n >> m;
    int a, b, c, d, e, f; cin >> a >> b >> c >> d >> e >> f;

    set<Pos> st;
    LOOP(m) {
        int x, y; cin >> x >> y;
        st.emplace(x, y);
    }

    vector<map<Pos,mint>> dp(n+1);

    dp[0][{0,0}] = 1;

    REP(i, n) {
        ITRM(pos, cnt, dp[i]) {
            auto [x, y] = pos;
            if(st.find(Pos{x+a,y+b}) == st.end()) dp[i+1][{x+a,y+b}] += cnt;
            if(st.find(Pos{x+c,y+d}) == st.end()) dp[i+1][{x+c,y+d}] += cnt;
            if(st.find(Pos{x+e,y+f}) == st.end()) dp[i+1][{x+e,y+f}] += cnt;
        }
    }

    mint ans = 0;
    ITRM(pos, cnt, dp[n]) ans += cnt;

    cout << ans.val() << ln;

    debug(ans);

    return 0;
}
