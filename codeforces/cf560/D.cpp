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
  int t,n,x,flag;
   cin>>t;
   while(t--)
   {
    cin>>n;
    int d[n];
    flag=0;
    for(int i=0;i<n;i++)
    {
      cin>>d[i];
    }
    sort(d,d+n);
    int x=d[n-1]*d[0];
    //cout<<x;
    for(int i=0;i<n;i++)
    {
     if(d[i]*d[n-1-i]!=x)
     {
      flag++;
      break;
     }
    }
    if(flag)
    {
      cout<<-1<<endl;
    }
    else
    {
      int count=0;
      for(int i=2;i<=sqrt(x);i++)
      {
        if(x%i==0)
        {
          if(x/i==i)
          {
            count++;
          }
          else
          {
            count+=2;
          }
        }
      }
      if(count==n)
      {
        cout<<x<<endl;
      }
      else
      {
        cout<<-1<<endl;
      }
    }
   }

return 0;
  
  
}
