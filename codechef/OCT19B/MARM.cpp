// by shirin_19
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
{
 ll int t,i,j,n,k;

cin>>t;
while(t--)
{
  cin>>n>>k;ll int a[n];
  for(i=0;i<n;i++)
  {
    cin>>a[i];
  }for(i=0;i<=min(3*n,k-1);i++)
  {
    a[i%n]=a[i%n]^a[n-(i%n)-1];
    
    //cout<<a[i]<<" ";
     }
     if(k>3*n)
     {//cout<< k<<" ";
     a[0]=a[0]^a[n-1];
         for(i=0;i<(k)%(3*n);i++)
         {//cout<<i;
             //a[i%n]=a[i%n]^a[n-(i%n)-1];
                 a[i%n]=a[i%n]^a[n-(i%n)-1];
         // b[i%n]=a[i%n];
         }
         

     }



for(i=0;i<n;i++)
{
  cout<<a[i]<<" ";
}
cout<<endl;}
return 0;
}

