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


int main ()
{
  fastio();
  int t,n,m,flag;
cin>>t;
while(t--)
{ 

cin>>n>>m;
int a[n];
int b[n];
int p[n];
map<int,int>mp;
for(int i=0;i<n;i++)
{
  cin>>a[i];
  b[i]=a[i];
}
sort(b,b+n);
for(int i=0;i<m;i++)
{
  cin>>p[i];
  mp[p[i]-1]++;
}
flag=1;
int count=0;
while(flag)
{
  count=0;
  for(int i=0;i<n-1;i++)
  {
    if(a[i+1]<a[i])
    {
      if(mp[i]==0)
      {
        flag=0;
        goto p;
        break;
      }
      else
      {
        swap(a[i+1],a[i]);
        //cout<<a[i];
      }
    }
  }
 for(int i=0;i<n;i++)
  {
    if(a[i]==b[i])
    {
      count++;
    }
  }
  if(count==n)
  {
    
    goto p;break;
  }
}
p:if(!flag)
{
  cout<<"NO"<<endl;
}
else
{
  cout<<"YES"<<endl;
}
}
  return 0;

}

