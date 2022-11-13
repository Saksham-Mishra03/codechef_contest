#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n,l;
	
	cin>>n;
	while(n!=0)
	{
	    cin>>l;
	    char ar[l];
	    map<char,int>m;
	    int temp=0;
	    for(int i =0;i<l;i++)
	    cin>>ar[i];
	    
	    if(l%2!=0)
	    cout<<"no"<<endl;
	    else
	    {
	        
	        for(int i = 0;i<l;i++)
	        {
	            m[ar[i]]++;
	            
	         }
	    for(auto i:m){
	        if(i.second%2){
	            temp = 1;
	            cout<<"no"<<endl;
	            break;
	        }
	    }
	    if(!temp)
	        cout<<"yes"<<endl;
	    }
	    n--;
	}
	return 0;
}
