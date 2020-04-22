//by shirin_19 Shreya_Kulkarni
#include <bits/stdc++.h>    
using namespace std;
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define pb  push_back
#define show(x) cout<<(#x)<<" : "<<x<<endl;
#define ll  long long
#define ld  long double
#define fill(a,val) memset(a,val,sizeof(a))
#define mp  make_pair
#define ff  first
#define ss  second
#define int long long
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
bool sortbysec(const pair<int,int> &a, 
              const pair<int,int> &b) 
{ return (a.second < b.second); }

signed main ()
{
  fastio();
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    int a[n+1];
    fill(a,0);
    int p=0;
    int neg=0;
    for(int i=1;i<=n;i++)
    {
      cin>>a[i];
      if(a[i]>0)
      {
        p++;
      }
      else
      {
        neg++;
      }

    }
    
    int count=1;
    for(int i=0;i<n;i++)
    {
      if(p==1 && a[i]<0)
      {
        count++;

        p=0;
      }
      else if(p==0 && a[i]>0)
      {
        count++;
      }

    }

    //cout<<count<<endl;
    int k=-INF;
    int m=-INF;
    int ans=0;
    //if(a[0]>0)
    {
      for(int i=1;i<=n;i++)
      {
        //cout<<k<<" "<<m<<endl;
        if(a[i]>0)
        {
          k=max(k,a[i]);
          if(n==i)
          {
            ans+=k;
          }
        }
        if(a[i]<0 && a[i-1]>0)
        {
          ans+=k;
          k=-INF;
          
        }
        if(a[i]>0 && a[i-1]<0 )
        {
          ans+=m;
          m=-INF;
        }
        if(a[i]<0)
        {
          m=max(a[i],m);
          if(n==i  )
          {
            ans+=m;
          }
        }
      }

    }
    cout<<ans<<endl;

    
  }
  

  return 0;
}

