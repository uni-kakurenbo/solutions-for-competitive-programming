//Codeforcesで128bit整数を使いたいとき
//→__int128_tを使う&GNU C++17 (64)で提出する

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define REP(i,n) for(ll i=0;i<ll(n);i++)
#define FOR(i,a,b) for(ll i=a;i<=ll(b);i++)
#define FORA(i,I) for(const auto& i:I)

#define ALL(x) x.begin(),x.end()

#define S second

#define coutALL(x) for(auto i=x.begin();i!=--x.end();i++)cout<<*i<<" ";cout<<*--x.end()<<endl;

signed main(){
  int ans = 0;
  REP(i, 4) {
    string s; cin >> s;
    if(s == "1111") ++ans;
  }
  cout << ans << endl;
}
