//shirin_19
#include <iostream>
using namespace std;

int main() {long long int t,n,k;
	// your code goes here
	cin>>t;
	while(t--)
	{
	    cin>>n>>k;
	    if(k>1000*1000*1000)
	    {cout<<"YES"<<endl;}
	    else
	    {if(n%(k*k)!=0)
	    {cout<<"YES"<<endl;}
	    else
	    {cout<<"NO"<<endl;}}
	}
	return 0;
}

