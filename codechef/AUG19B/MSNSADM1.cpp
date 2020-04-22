//by shirin_19
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t,i,n;
	// your code goes here
	cin>>t;
	while(t--)
	{
	    cin>>n;long long int a[n];long long int b[n];long long int c[n];
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    for(i=0;i<n;i++)
	    {
	        cin>>b[i];
	    }
	    for(i=0;i<n;i++)
	    {
	        c[i]=a[i]*20-b[i]*10;
	        if(c[i]<0)
	        {c[i]=0;}
	    }
	    sort(c,c+n);
	    cout<<c[n-1]<<endl;
	}
	return 0;
}

