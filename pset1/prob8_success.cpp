#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		long long int x,y,p,q,f;
		cin>>x>>y>>p>>q;
		if(p==q)
		{
			if(x==y) 
			{
				cout<<0<<endl;
				t--;
				continue;
			}
			else 
			{
				cout<<-1<<endl;
				t--;
		    	continue;
		    } 
			//t--;
		}
		
		if(p==0)
		{
			if(x==0) {cout<<0<<endl;t--;continue;}
			else {cout<<-1<<endl;t--;continue;} 
			//t--;
			//continue;
		}
		else
		{
			//f = max(ceil(float(x)/float(p)),ceil(float(y-x)/float(q-p)));
			f = ceil(max((x*1.0)/p,((y-x)*1.0)/(q-p)));
			cout<<(q*f)-y<<endl;
			t--;
		}

	}

	return 0;
}