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
long long C(ll int n,ll int r) {
    if(r > n - r) r = n - r; // because C(n, r) == C(n, n - r)
    long long ans = 1;
    int i;

    for(i = 1; i <= r; i++) {
        ans *= n - r + i;
        ans /= i;
    }

    return ans;
}
int removeDuplicates(ll int arr[],ll int n) 
{ 
    // Return, if array is empty 
    // or contains a single element 
    if (n==0 || n==1) 
        return n; 
  
   ll int temp[n]; 
  
    // Start traversing elements 
   ll int j = 0; 
    for (int i=0; i<n-1; i++) 
  
        // If current element is not equal 
        // to next element then store that 
        // current element 
        if (arr[i] != arr[i+1]) 
            temp[j++] = arr[i]; 
  
    // Store the last element as whether 
    // it is unique or repeated, it hasn't 
    // stored previously 
    temp[j++] = arr[n-1]; 
  
    // Modify original array 
    for (int i=0; i<j; i++) 
        arr[i] = temp[i]; 
  
    return j; 
} 
int main()
{ll int t,n,k,i,ans;
  cin>>t;
  while(t--)
  {
    cin>>n>>k;ll int a[n];ans=1;map<ll int,ll int>mp;ll int count[1000000]={0};
    for(i=0;i<n;i++)
    {
      cin>>a[i];
      mp[a[i]]++;
    }
   sort(a,a+n);

   for(i=0;i<k;i++)
   {
    count[a[i]]++;
   }int c=0;
   for(i=0;i<=a[n-1];i++)
   {
       if(count[i]!=0)
       {
           c++;
       }
   }
removeDuplicates(a,n);
   for(i=0;i<c;i++)
   {//cout<<mp[a[i]]<<count[a[i]];
    ans=ans*C(mp[a[i]],count[a[i]]);
   // cout<<C(mp[a[i]],count[i]);
   }
      cout<<ans<<endl;
  }

return 0;
}
