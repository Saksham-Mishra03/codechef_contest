#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll long long int
ll M = 1000000007;
ll d[1000001];


int main() {
	// your code goes here
	ll t;
	cin>>t;
	d[0]=0;
	d[1]=1;
	
	for(ll j=2;j<=1000000;j++)
	{
	    d[j] = (j*(d[j-1])%M)%M;
	}
	
	while(t--)
	{
	    ll num,sum = 0;
	    cin>>num;
	    map<ll,ll>m;
	    for(ll k =0;k<num;k++)
	    {
	        ll x;
	        cin>>x;
	        m[x]++;
	    }
	    for(auto it:m)
	    {
	        sum = (sum+(d[it.first]*it.second)%M)%M;
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
