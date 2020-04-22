//BY shirin_19
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
{int t,i,x,y,n,m;
fastio();
  cin>>t;
 
  while(t--)
  { vector< pair <int,int> > v; map<int,int>ma;map<int, int>M;
    cin>>n>>m;int s[n+1]={1};int flag=0;
    for(i=0;i<m;i++)
    {
      cin>>x>>y;
      int p=min(x,y);
      int q=max(x,y);
      v.pb(make_pair(p,q));
    }
    for(i=0;i<=n;i++)
    {s[i]=1;}
    for(i=0;i<v.size();i++)
    {//cout<<v[i].first<<v[i].second<<endl;
      ma[v[i].first]++;
      ma[v[i].second]++;
      M[v[i].first]=v[i].second;

    }
    sort(v.begin(),v.end());
    if(v.size()%2==0)
    {
      cout<<1<<endl;
      for(i=1;i<=n;i++)
      {
        cout<<1<<endl;
      }cout<<endl;
    }
    else
    {
      for(i=1;i<=n;i++)
      {
        if(ma[i]%2!=0)
        {s[i]=2;
          flag=1;
          break;
        }
      }
      if(flag)
     { cout<<2<<endl;
      for(i=1;i<=n;i++)
      {
        cout<<s[i]<<" ";
      }cout<<endl;}
      else
      {
        for(i=0;i<n;i++)
        {
          if(ma[i]!=0)
          {
            s[i]=3;
            ma[M[i]]--;
            break;
          }

        }
        for(i=1;i<=n;i++)
        {
          if(ma[i]%2!=0)
          {
            s[i]=2;
            break;
          }
        }
        cout<<3<<endl;
        for(i=1;i<=n;i++)
        {//cout
          cout<<s[i]<<" ";
        }cout<<endl;
      }
    }

  }
return 0;
}

