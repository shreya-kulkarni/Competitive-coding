// by shirin_19
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {long long int t,i,n,j,min,max;
	// your code goes here
	cin>>t;
	while(t--)
	{
	    cin>>n;long long int c[n];long long int h[n];int cc[100000]={0};long long int m[n];long long int k[n];int flag=0;long long int a[n]={0};int sum[n+1]={0};
	    for(i=0;i<n;i++)
	    {
	        cin>>c[i];
	    }
	    for(i=0;i<n;i++)
	    {
	        cin>>h[i];
	        //count[h[i]]++;
	    }sort(h,h+n);
	    for(i=0;i<n;i++)
	    {
	       min=1>=i+1-c[i]?1:i+1-c[i];
	       max=i+1+c[i]>=n?n:i+1+c[i];
	      // l[i]=max-min;
	       m[i]=min;
	       k[i]=max;
	    }int count=0;
	    for(i=0;i<n;i++)
	    {//sum[n+1]={0};
	        //if(m[i]==1 && k[i]==n)
	       // {count++;continue;}
	        //for(j=m[i];j<=k[i];j++)
	       // {a[j]++;
	            //if(a[j]>h[n-1]||a[j]<h[0])
	            //{flag=1;break;}
	        //}
	        sum[m[i]]++;
	        if(k[i]<n)
	        {sum[k[i]+1]--;}
	    } a[0] += sum[1]; 
    for (int i = 1; i <n; i++) { 
        sum[i+1] += sum[i]; 
        a[i] += sum[i+1]; 
    } 
	    //for(i=0;i<n;i++)
	   // {a[i+1]=a[i+1]+count;}
	    /*for(i=0;i<n;i++)
	    {cout<<a[i]<<" ";
	        //cc[a[i]]++;
	    }*/sort(a,a+n);flag=0;
	    for(i=0;i<n;i++)
	    {//cout<<a[i]<<" "<<h[i]<<endl;
	        if(a[i]!=h[i])
	        {
	            flag=1;break;
	            
	        }
	    }
	    if(flag==1)
	    {
	        cout<<"NO"<<endl;
	    }
	    else
	    {cout<<"YES"<<endl;}
	}
	return 0;
}


