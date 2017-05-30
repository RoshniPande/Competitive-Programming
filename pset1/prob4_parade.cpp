#include <iostream>
#include <cmath>
#include <algorithm>
#include <stack>
using namespace std;

int main()
{	
	while(1)
	{
		int n,r=1,o=0;
		cin>>n;
		if (n==0)
		{
			break;
		}
		int p[n];
		stack<int> l;
		while(!l.empty()) l.pop();

		for (int i = 0; i < n; ++i)
		{
			cin>>p[i];
		}
		//cout<<r<<endl;
		for (int i = 0; i < n; i++)
		{
			if (!l.empty() && l.top()==r)
			{
				r++;
				i--;
				l.pop();
				continue;
			}
			if (p[i]==r)
			{
				r++;
				continue;
			}		
			else if (!l.empty() && p[i]>l.top())
			{
				o++;
				break;
			}
			
			else //if (p[i]>r)
			{
				l.push(p[i]);
				continue;
			}			
		}

		if (o>0)
		{
			cout<<"no"<<endl;
		}
		else cout<<"yes"<<endl;
	}
	
	return 0;
}

/*else if (l.empty() && p[i]!=r)
			{
				l.push(p[i]);
				continue;
			}
			/*else if (l.empty() && p[i]!=r)
			{
				r++;
				l.push(p[i]);
			} 
			else if (!l.empty() && p[i]>r)
			{
				l.push(p[i]);
				continue;
			}*/