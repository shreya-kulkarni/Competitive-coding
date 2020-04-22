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

bool kFactors(int n, int k) 
{ 
  // A vector to store all prime factors of n 
  vector<int> P; 

  // Insert all 2's in vector 
  while (n%2 == 0) 
  { 
    P.push_back(2); 
    n /= 2; 
  } 

  // n must be odd at this point 
  // So we skip one element (i = i + 2) 
  for (int i=3; i*i<=n; i=i+2) 
  { 
    while (n%i == 0) 
    { 
      n = n/i; 
      P.push_back(i); 
    } 
  } 

  
  if (n > 2) 
    P.push_back(n); 

  
  if (P.size() < k) 
  { 
    
    return false; 
  } 
return true;
} 



signed main ()
{
  fastio();
  int t;
  cin>>t;
  while(t--)
  {
    int x,k;
    cin>>x>>k;
    if(k==1)
    {
      if(x>=2)
      {
        cout<<1<<endl;
      }
      else
      {
        cout<<0<<endl;
      }
    }
    else if(k==2)
    {
      if(x>=4 && !isprime(x))
      {
        cout<<1<<endl;
      }
      else
      {
        cout<<0<<endl;
      }
    }
    else
    {
     if(kFactors(x,k))
     {
      cout<<1<<endl;
     }
     else
     {
      cout<<0<<endl;
     }
    }
  }
  
  
return 0;
}
