//by shirin_19 
#include <bits/stdc++.h>    
using namespace std;
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define pb  push_back
#define show(x) cout<<(#x)<<" : "<<x<<endl;
#define ll  long long
#define int long long
#define debug cout<<"*"<<endl;
#define ld  long double
#define fill(a,val) memset(a,val,sizeof(a))
#define mp  make_pair
#define ff  first
#define ss  second
#define pii pair<ll,ll>
#define sq(x) ((x)*(x))
#define all(v) v.begin(),v.end()
#define fone for(i=0;i<n;i++)
#define endl "\n"
const ll MOD     = 1000*1000*1000+7;
const ll INF     = 1ll*1000*1000*1000*1000*1000*1000 + 7;
const ll MOD2    = 998244353;
const ll N          = 5000*100+1;
const ll N2      = 1000*1000+5;
const ld PI  = 3.14159265;
const ll R   = 250;
ll gcd(ll a, ll b){if(!b)return a;return gcd(b, a % b);} 
ll power(ll x,ll y,ll p){ll res=1;x%=p;while(y>0){if(y&1)res=(res*x)%p;y=y>>1;x=(x*x)%p;}return res;} 
bool sortbysec(const pair<int,int> &a, const pair<int,int> &b) 
{ return (a.second < b.second); }
bool in(int x, int l, int r) {
    return l <= x && x <= r;
}

signed  main ()
{
  fastio();
  int n, h, l, r;
    cin >> n >> h >> l >> r;
    vector<int> a(n);
    for (auto &it : a) cin >> it;
    vector<vector<int>> dp(n + 1, vector<int>(n + 1, INT_MIN));
    dp[0][0] = 0;
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += a[i];
        for (int j = 0; j <= n; ++j) {
            dp[i + 1][j] = max(dp[i + 1][j], dp[i][j] + in((sum - j) % h, l, r));
            if (j < n) dp[i + 1][j + 1] = max(dp[i + 1][j + 1], dp[i][j] + in((sum - j - 1) % h, l, r));
        }
    }
    
    cout << *max_element(dp[n].begin(), dp[n].end()) << endl;
    
}
