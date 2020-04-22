//shirin_19
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
bool sortbysec(const pair<int,int> &a, 
              const pair<int,int> &b) 
{ 
    return (a.second < b.second); 
    }


signed main ()
{
  fastio();
  int t,n,m,k;
  cin>>t;
  while(t--)
  {
    int flag=0;
    int p[N2];
    cin>>n>>k;
    int a[n];
    int psize;
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
    }
    sort(a,a+n);
    map<int,int>mp;

    p[0]=1;
    mp[p[0]]++;
    for(int i=1;;i++)
    {
      p[i]=p[i-1]*k;
      //cout<<p[i]<<" ";
      mp[p[i]]++;
      if(p[i]>a[n-1])
      {
        psize=i+1;
        break;
      }


    }
    mp[0]++;
    for(int i=0;i<n;i++)
    {
      if(mp[a[i]]==1)
      {
        
        mp[a[i]]=0;
        

      }
      else
      {
       int sum=a[i];
       //cout<<sum;
       for(int j=psize-1;j>=0;j--)
       {
        if(sum-p[j]>=0 && p[j]!=0 && mp[p[j]])
        {
         
          sum=sum-p[j];
          //cout<<p[j]<<" ";
           p[j]=0;
           mp[p[j]]=0;

        }
        //cout<<endl;
       }
       if(sum!=0)
       {
          flag++;
          break;
       }
      }
    }
    if(flag)
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

