//by shirin_19
#include <bits/stdc++.h>    
using namespace std;
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define pb  push_back
#define show(x) cout<<(#x)<<" : "<<x<<endl;
#define ll  long long
# define int long long
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
#define debug cout<<"*"<<endl;
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

signed main ()
{
  fastio();
  int t,n;
  cin>>t;
  while(t--)
  {
    cin>>n;
    int a[n];
    vector<int>v;

  v.pb(0);
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
      if(a[i]%2==0)
      {
        v.pb(i+1);
      }
    }
    int ans=0;
    int k=0;
   if(v.size()>1)
   {
    v.pb(n+1);
    k=v[1];
    for(int i=1;i<v.size()-1;i++)
    {
      if(a[v[i]-1]%4!=0)
      {
        ans+=(v[i+1]-v[i])*k;
      }
      k=v[i+1]-v[i];
    }
   }
   cout<<n*(n+1)/2-ans<<endl;
  }
  
return 0;
}
