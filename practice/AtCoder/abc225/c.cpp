#include <bits/stdc++.h>
using namespace std;

// #include <atcoder/...>
// using namespace atcoder;

#ifdef LOCAL_JUDGE
    #include<debug>
    #define debug(...) Debug::debug(Debug::split(#__VA_ARGS__), 0, __LINE__, __VA_ARGS__)
    #define DEBUG(...) do { Debug::DEBUG(nullptr, "#" + to_string(__LINE__) + "  "); Debug::DEBUG(__VA_ARGS__); Debug::DEBUG(nullptr, "\033[m"); } while(0);
#else
    #define debug(...) { ; }
    #define DEBUG(...) { ; }
#endif

using ll = long long;
using ull = unsigned long long;

#define until(...) while(!(__VA_ARGS__))

#define REP(i,n) for(int i=0, i##_length=int(n); i<i##_length; ++i)
#define FOR(i,a,b) for(ll i=a, i##_last=ll(b); i<=i##_last; ++i)
#define FORA(i,I) for(auto& i:I)

#define ALL(x) begin(x),end(x)
#define RALL(x) rbegin(x),rend(x)

template<class T> inline bool chmax(T &a, T b) { return (a<b ? a=b, true : false); }
template<class T> inline bool chmin(T &a, T b) { return (a>b ? a=b, true : false); }

template <class T = int> struct Matrix : vector<vector<T>> {
    Matrix(size_t height, size_t width) : vector<vector<T>> (height, vector<T> (width)) {}
    Matrix(size_t height, size_t width, T init) : vector<vector<T>> (height, vector<T> (width, init)) {}
    inline T& operator()(size_t i, size_t j) {return (*this)[i][j]; }
};

signed main() {
    int n, m; cin >> n >> m;
    Matrix M(n, m);
    REP(i, n) REP(j, m) cin >> M(i,j), M(i,j)--;
    REP(i, n-1) {
        bool flag = true;
        REP(j, m) {
            flag &= M(i+1,j) == M(i,j) + 7;
        }
        if(!flag) {
            cout << "No" << "\n";
            return 0;
        };
    }
    REP(i, n) {
        bool flag = true;
        REP(j, m-1) {
            flag &= M(i,j+1)%7 == M(i,j)%7 + 1 && M(i,j+1) == M(i,j) + 1;
        }
        if(!flag) {
            cout << "No" << "\n";
            return 0;
        };
    }
    cout << "Yes" << "\n";
    return 0;
}
