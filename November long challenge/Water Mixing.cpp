#include <iostream>
using namespace std;

int main() {
	// your code goes hereh
	int n,t,d,h,c;
	cin>>n;
	while(n!=0)
	{
	    cin>>t>>d>>h>>c;
	    if(t==d)
	    cout<<"yes"<<endl;
	   else if(t<d)
	    {
	        if(h>=(d-t))
	        cout<<"yes"<<endl;
	        else
	        cout<<"no"<<endl;
	        
	    }
	    else
	    {
	        if(c>=(t-d))
	        cout<<"yes"<<endl;
	        else
	        cout<<"no"<<endl;
	    }
	    n--;
	}
	return 0;
}
