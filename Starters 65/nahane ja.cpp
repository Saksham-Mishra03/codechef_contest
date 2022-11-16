#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n1,k1;
	    cin>>n1>>k1;
	   int arr[n1];
	   int flag=0;
	   for(int i=0;i<n1;i++)
	   {
	       cin>>arr[i];
	       if(arr[i]==k1 and i!=n1-1)
	       flag =1;
	   }
	   if(n1==1 and k1==arr[0]){
	       cout<<"yes"<<endl;
	       continue;
	   }
	   if(!flag)
	   {
	       cout<<"no"<<endl;
	       
	   }
	   else
	   {
	       cout<<"yes"<<endl;
	   }
	   
	}
	return 0;
}
