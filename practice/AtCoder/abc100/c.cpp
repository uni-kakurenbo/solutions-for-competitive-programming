#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define REP(i,n) for(ll i=0;i<ll(n);i++)
#define FOR(i,a,b) for(ll i=a;i<=ll(b);i++)
#define FORA(i,I) for(auto& i:I)

#define ALL(x) x.begin(),x.end()

signed main() {
  int n; cin >> n;
  ll ans = 0;
  REP(i, n) {
    ll v; cin >> v;
    while(v%2 == 0) v /= 2, ans++;
  }
  cout << ans << endl;
  return 0;
}
