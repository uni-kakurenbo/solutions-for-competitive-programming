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
#define FOR(i,a,b) for(int i=a, i##_last=int(b); i<=i##_last; ++i)
#define FORA(i,I) for(auto& i:I)

#define ALL(x) begin(x),end(x)
#define RALL(x) rbegin(x),rend(x)

template<class T> inline bool chmax(T &a, T b) { return (a<b ? a=b, true : false); }
template<class T> inline bool chmin(T &a, T b) { return (a>b ? a=b, true : false); }

struct Balls {
    Balls(int num, int cnt) : num(num), cnt(cnt) {};
    int num, cnt;
};

signed main() {
    int q; cin >> q;
    queue<Balls> que;
    REP(i, q) {
        short com; cin >> com;
        if(com == 1) {
            int x, c; cin >> x >> c;
            que.emplace(x, c);
        }
        if(com == 2) {
            int c; cin >> c;
            ll res = 0;
            while(true) {
                Balls& front = que.front();
                c-=front.cnt;
                res += 1LL * front.num * front.cnt;
                if(c <= 0) break;
                que.pop();
            }
            que.front().cnt = -c;
            res += 1LL * que.front().num * c;
            cout << res << endl;
        }
    }
    return 0;
}
