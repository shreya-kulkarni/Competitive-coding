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
{ll int t,i,n,m,ans,p;
cin>>t;
while(t--)
{
  cin>>n>>m;ans=-1;
  if(m<n-1)
  {
    cout<<-1<<endl;
  }
  else if(n==1)
  {
    if(m==1)
    {
      cout<<1<<endl;
    }
    else if(m==0)
    {
      cout<<0<<endl;
    }
    else
    {
     cout<<-1<<endl;
    }
  }
 else if(n==2)
  {
    if(m==1)
    {
      cout<<1<<endl;
    }
    else if(m>1 && m<=3)
    {
      cout<<2<<endl;
    }
    else 
    {
      cout<<-1<<endl;
    }
  }
  else
  {
    if(n%2==0)
    {
      if(m>=n-1 && m<=n+1)
      {
        ans=2;
      }
      else if(m>n+1 && m<=2*n)
      {
        ans=3;
      }
      else if( m<=2*n+(n/2)*n && m>2*n)
      { double x=m;double y=n;
     
          if(double(((x-2*y)*2)/y)==int(((m-2*n)*2)/n))
        {ans=((m-2*n)*2)/n;
       
       //cout<<((m-2*n)*2)/n;
        }
        else
        {ans=((m-2*n)*2)/n+1;}
        //cout<<ans;
        ans=ans+3;
        //cout<<ans;
      }
      else
      {
        ans=-1;
      }
    }
    else
    {
     if(m>=n-1 && m<=n+1)
      {
        ans=2;
      }
      else if(m>n+1 && m<=2*n)
      {
        ans=3;
      }
      else if( m<=2*n+(n-3)*(n/2+(n+1)/2)/2 && m>2*n)
      {
        p=(m-2*n)/(n/2+(n+1)/2);
      // cout<<p;
       double x=m;double y=n;//cout<<(x-2*y)/(int(y/2)+(y+1)/2);
        
        if(m==2*n+(n-3)*(n/2+(n+1)/2)/2)
        {
            ans=n;
        }
        else if(double((x-2*y)/(int(y/2)+((y+1)/2)))==int((m-2*n)/(n/2+(n+1)/2)))
        {
                   ans=2*p+3;
        }
        
        else if(m<=2*n+p*(n/2+(n+1)/2)+n/2)
        {
          ans=2*p+4;//cout<<p;
        }
        else if(m>2*n+p*(n/2+(n+1)/2)+n/2)
        {
          ans=2*p+5;
        }

      }
      else
      {
        ans=-1;
      }

    }//cout<<ans;

    if(ans<=n)
 {cout<<ans<<endl;}
 else
 {cout<<-1<<endl;}
  }
}
return 0;
}

