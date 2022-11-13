#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,a,b;
	cin>>n;
	while(n!=0)
	{
	    cin>>a>>b;
	    if(a>b)
	    cout<<"yes"<<endl;
	    else
	    cout<<"no"<<endl;
	    n--;
	}
	return 0;
}
