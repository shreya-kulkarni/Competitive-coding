//by shirin_19
#include <bits/stdc++.h>    
using namespace std;
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define pb  push_back
#define show(x) cout<<(#x)<<" : "<<x<<endl;
#define ll  long long
#define ld  long double
#define ull unsigned long long int
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
ll int gcdExtended(ll int a,ll int b,ll int *x, ll int *y); 
  
// Function to find modulo inverse of b. It returns 
// -1 when inverse doesn't 
ll int modInverse(ll int b,ll int m) 
{ 
    ll int x, y; // used in extended GCD algorithm 
    ll int g = gcdExtended(b, m, &x, &y); 
  
    // Return -1 if b and m are not co-prime 
    if (g != 1) 
        return -1; 
  
    // m is added to handle negative x 
    return (x%m + m) % m; 
} 
  
// Function to compute a/b under modlo m 
ll int modDivide(ll int a,ll int b,ll int m) 
{ 
    a = a % m; 
   ll int inv = modInverse(b, m); 
     if (inv == -1)
      return -1;
    else
   { //cout<<(inv * a) % m<<endl;
       return (inv * a) % m; }
} 
  
// C function for extended Euclidean Algorithm (used to 
// find modular inverse. 
ll int gcdExtended(ll int a,ll int b,ll int *x,ll int *y) 
{ 
    // Base Case 
    if (a == 0) 
    { 
        *x = 0, *y = 1; 
        return b; 
    } 
  
   ll int x1, y1; // To store results of recursive call 
   ll int gcd = gcdExtended(b%a, a, &x1, &y1); 
  
    // Update x and y using results of recursive 
    // call 
    *x = y1 - (b/a) * x1; 
    *y = x1; 
  
    return gcd; 
} ll mulmod(ll a, ll b, ll mod) 
{ 
    ll res = 0; // Initialize result 
    a = a % mod; 
    while (b > 0) 
    { 
        // If b is odd, add 'a' to result 
        if (b % 2 == 1) 
            res = (res + a) % mod; 
  
        // Multiply 'a' with 2 
        a = (a * 2) % mod; 
  
        // Divide b by 2 
        b /= 2; 
    } 
  
    // Return result 
   // cout<<res%mod<<"*"<<endl;
    return res % mod; 
} int removeDuplicates(int arr[], int n) 
{ 
    if (n==0 || n==1) 
        return n; 
  
    // To store index of next unique element 
    int j = 0; 
  
    // Doing same as done in Method 1 
    // Just maintaining another updated index i.e. j 
    for (int i=0; i < n-1; i++) 
        if (arr[i] != arr[i+1]) 
            arr[j++] = arr[i]; 
  
    arr[j++] = arr[n-1]; 
  
    return j; 
} 
ll fact(ll n)
 {
           if(n==1 || n==0) return 1;
           return ((n%MOD)*(fact(n-1)%MOD)%MOD);
 }
 int main()
{ll int n,k,i,sum;sum=0;ll int f[100000];int a[1000000];int count[1000000]={0};int c[1000000];ll int DP[1620][1620]={0};
  cin>>n>>k;//ll int ans=0;
  for(i=0;i<n;i++)
  {
      cin>>a[i];
      count[a[i]]++;
  }
 sort(a,a+n);
  n=removeDuplicates(a,  n); 
  for(i=0;i<n;i++)
  {
      c[i+1]=count[a[i]];
      //cout<<count[a[i]]<<endl;
  }
 
ll int ans=0; /// final answer
DP[0][0] = 1;
for(int i=1; i<=n; i++){
    DP[i][0] = 1;
    for(int j=1; j<=i && j<=k; j++){
        DP[i][j] = (DP[i-1][j] + ((DP[i-1][j-1]%MOD) *( c[i]%MOD))%MOD)%MOD;
    }
}
for(int i=1; i<=k; i++)

{ ans=(ans+DP[n][i])%MOD;
}
   cout<<(ans+1)%MOD;
return 0;
}
