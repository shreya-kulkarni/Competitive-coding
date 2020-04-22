//by shirin_19
#include <bits/stdc++.h>    
using namespace std;
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define pb  push_back
#define show(x) cout<<(#x)<<" : "<<x<<endl;
#define ll   long long
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
const ll MOD     = 1000*1000*1000;
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
 void precomput(ll int F[]) 
{ 
    /* 0th and 1st number of the series are 0 and 1*/
    F[0] = 0; 
    F[1] = 1; 
   
    /* Add the previous 2 numbers in the series 
       and store last two digits of result */
    for (ll int i = 2; i < 60; i++) 
        F[i] = (F[i-1] + F[i-2])%10; 
} 
   
// Returns last two digits of n'th Fibonacci  
// Number 
int findLastDigit(ll int F[],ll int n) 
{ 
    return F[n%60]; 
} 

  
int main()
{ll int f[1000000];ll int i;map<ll int,ll int>v;
ll F[300] = {0}; 
    precomput(F); ll int k=2;
    f[0]=1;ll int count=2;
f[1]=3;
    for(i=2;i<1000000;i++)
    {
        f[i]=f[i-1]+k*2;
        k=2*k;
        count++;
        if(f[i]>=1000000000000000000)
        {
           break;
        }
        

       //cout<< f[i]<<endl;
    }
    //cout<<count;
    v[f[0]]=1;

    v[f[1]]=2;
    for(i=2;i<count;i++)
    {
        v[f[i]]=findLastDigit(F, f[i])%10;
      // cout<<f[i]<<" "<<v[f[i]]<<endl;
        //cout<<v[i].ff<<": "<<v[i].ss<<endl;
    }
    //cout<<count;
    for(i=0;i<count;i++)
    {
        //v[f[i]]=findLastDigit(F, f[i]+1)%10;
       //cout<<f[i]<<" "<<v[f[i]]<<endl;
        //cout<<v[i].ff<<": "<<v[i].ss<<endl;
    } 
    int t;
    cin>>t;
    while(t--)
    {ll int n;
        cin>>n;
        //cout<<n;
        if(n==1)
 {cout<<0<<endl;}
else if(2<=n && n<=3)
{cout<<1<<endl;}
 //ll int p=binarySearch(f,0,count,n);
 else if(3<n && n<=7)
 {
     cout<<2<<endl;
 }
 else
 {
     ll int p;//=binarySearch(f,0,count,n);
     for(i=0;i<count;i++)
     {
         //cout<<f[i]<<endl;
         if(n<=f[i])
         {
          p=i;
         // cout<<p<<endl;
          break;
         }
     }
 //cout<<f[p]<<endl;
 cout<<v[f[p-1]]<<endl;
 }
    }
}

