//by shirin_19
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {int t,i,n,j;
	// your code goes here
	cin>>t;
	while(t--)
	{int flag=0;char a[1000000]={-1};
	    scanf("%s",a);
	    n=strlen(a);//cout<<n;
	    for(i=0;i<n;i++)
	    {/*for(j=0;j<n;j++)
	    {cout<<a[j];}cout<<endl;*/
	        if(a[i]=='1')
	        {
	            a[i]='2';
	            if(a[i-1]=='0'&& i>0)
	            {
	                a[i-1]='1';goto p;
	            }if(a[i-1]=='1'&& i>0)
	            {
	                a[i-1]='0';goto p;
	            }
	            p:if(a[i+1]=='0'&& i!=n-1)
	            {
	                a[i+1]='1';
	                goto l;
	               // cout<<" "<<a[i+1]<<5<<endl;
	            }if(a[i+1]=='1'&& i!=n-1)
	            {
	                a[i+1]='0';
	                goto l;//cout<<a[i+1]<<endl;
	            }//cout<<a[i+1]<<endl;
	            l:i=i-2;
	        }
	    }for(i=0;i<n;i++)
	    {//cout<<a[i];
	        if(a[i]!='2')
	        {flag=1;
	            break;
	        }
	    }
	    if(flag==1)
	    {cout<<"LOSE"<<endl;}
	    else
	    {cout<<"WIN"<<endl;}
	    
	}
	return 0;
}

