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
{int t,n,i,j,count,flag;
  cin>>t;
  while(t--)
  {count=0;int a[1000]={100000};
    cin>>n;
    for(i=0;i<n;i++)
    {
      cin>>a[i];
    }
    //psum=0;
    for(i=0;i<n;i++)
    {flag=0;
        for(j=i-1;j>=i-5 && j>=0;)
        {flag=0;//cout<<a[i]<<" "<<a[j]<<endl;
            if(a[i]>=a[j])
            {
                flag=1;
                break;
            }
            if(j>0)
            {j--;}
            else
            {break;}
        }
        if(!flag)
        {
            count++;
            //cout<<a[i]<<endl;
        }
    }
    cout<<count<<endl;
  }
return 0;
}

