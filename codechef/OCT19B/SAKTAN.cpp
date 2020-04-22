//by shirin_19
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
{ 
    return (a.second < b.second); 
}
int main()
{int t,n,m,q,i,j,x,y;ll reven,rodd,ceven,codd;ll count;
  cin>>t;
  while(t--)
  {count=0;
    cin>>n>>m>>q;int b[1000000]={0};int c[1000000]={0};codd=0;ceven=0;rodd=0;reven=0;
    //int a[n][m]={0};
    for(i=0;i<q;i++)
    {
      cin>>x>>y;
      b[x-1]++;
      c[y-1]++;
    }
    for(i=0;i<n;i++)
    {
        //cout<<b[i]<<" ";
      if(b[i]%2==0)
      {
        reven++;
      }
      else
        {rodd++;}
    }//cout<<endl;

    for(i=0;i<m;i++)
    {//cout<<c[i]<<" ";
      if(c[i]%2==0)
      {
        ceven++;
      }
      else
      {
        codd++;
      }
    }
    count=rodd*ceven+codd*reven;

   cout<<count<<endl;

  }
return 0;
}

