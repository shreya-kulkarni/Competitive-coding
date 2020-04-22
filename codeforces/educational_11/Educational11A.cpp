//by shirin_19
#include <bits/stdc++.h>    
using namespace std;
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define pb  push_back
#define show(x) cout<<(#x)<<" : "<<x<<endl;
#define ll  long long
#define int long long
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
bool isprime(int n)
{
  for(int i=2;i<=sqrt(n);i++)
  {
    if(n%i==0)
    {
      return false;
    }
  }
  return true;
}

signed main ()
{
  fastio();
  int n;
  cin>>n;
  vector<int>v;
  for(int i=2;i<=10000;i++)
  {
        if(isprime(i)){
          v.pb(i);
            //cout<<v.back();
        }
  }
  int a[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
    
  }
vector<int>ans;
  for(int i=1;i<n;i++)
  {
    if(__gcd(a[i],a[i-1])>1)
    {
     // count++;
     for(int j=0;j<v.size();j++)
     {
      if(__gcd(a[i],v[j])==1&& __gcd(a[i-1],v[j])==1 )
      {
        ans.pb(a[i-1]);
        ans.pb(v[j]);
        break;
      }
     }
    }
    else
    {
      ans.pb(a[i-1]);
    }
  }
 ans.pb(a[n-1]);
 cout<<ans.size()-n<<endl;
 for(auto x:ans)
 {
  cout<<x<<" ";
 }
  
  
}
