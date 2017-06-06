#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	long int n,m,d,u=0,x=pow(6,10),t=0;
	cin>>n>>m>>d;
	vector<int> v;
	//vector<int> t;
	//v[0]=0;
	for (long int i = 0; i < n*m; ++i)
	{
		long int g;
		cin>>g;
		v.push_back(g);
		int w=v.at(0)%d;
		if (v.at(i)%d != w)
		{
			cout<<-1<<endl;
			return 0;
		}
	}
	sort(v.begin(),v.end());
	for (long int i = 0; i < n*m; ++i)
	{
		t=0;
		for (long int j = 0; j < n*m; ++j)
		{
			if (i==j) continue;
			/*if (abs(v[i]-v[j])%d != 0)
			{
				u++;
				break;
			}*/
			t+=(abs(v[i]-v[j])/d);
		}
		x=min(x,t);
		//if (u>0) break;
	}
	
	/*mid=v[(n*m)/2],mid1=v[(n*m)/2]+1,mid2=v[(n*m)/2]-1;
	for (int i = 1; i <= m*n; ++i)
	{
		t1+=(abs(v[i]-mid))/d;
		
	}

	if (u>0)
	{
		cout<<-1<<endl;
	}
	else
	{
		/*int c=min(t1,t2);
		int d=min(t2,t3);
		int c=min(c,d);
		cout<<c<<endl;
		int c;
		c=min(t1, min(t2,t3));
		cout<<c<<endl;*
		//x=*min_element(v.begin(),v.end());
		cout<<x<<endl;
	}*/
	cout<<x<<endl;
	return 0;
}
