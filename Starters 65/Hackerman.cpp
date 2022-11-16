#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,x,y;
	cin>>n;
	while(n--)
	{
	    cin>>x>>y;
	    int sum = x+y;
	    int count =0;
	    for(int i = 1;i<sum;i++)
	   { if(sum%i==0)
	    count++;}
	    if(count<2)
	    cout<<"alice"<<endl;
	    else
	    cout<<"bob"<<endl;
	}
	return 0;
}
