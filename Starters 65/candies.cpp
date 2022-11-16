#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,l;
	int count = 0;
	cin>>n;
	while(n--)
	{
	    int flag=0;
	    cin>>l;
	   int ar[2*l];
	   for(int i = 0;i<2*l;i++){
	       cin>>ar[i];
	       
	   }
	   for(int i = 0;i<2*l;i++)
	   {int num = ar[i];
	   count =0;
	   for(int j = 0;j<2*l;j++)
	   {
	       if(num==ar[j])
	       count++;
	   }
	   	    if(count>2)
	       {
	          flag++;
	          break;
	          
	       }
	      
	      
	   }
	   if(flag==1)
	   cout<<"no"<<endl;
	   else
	   cout<<"yes"<<endl;

	       
	   
	}
	return 0;
}
