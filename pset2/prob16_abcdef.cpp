#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int n,t=0;
	cin>>n;
    int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	vector<int> lhs;
	vector <int> rhs;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			for (int k = 0; k < n; ++k)
			{
				lhs.push_back((a[i]*a[j]) + a[k]);
				/*if (a[k]!=0)
				{
					rhs.push_back((a[i]+a[j]) * (a[k]));
				}*/
			}
		}
	}

	sort(lhs.begin(),lhs.end());
	//sort(rhs.begin(),rhs.end());
	/*for (int i = 0; i < lhs.size(); ++i)
	{
		cout<<lhs[i]<<" ";
	}
  cout<<endl;
	for (int i = 0; i < rhs.size(); ++i)
	{
		cout<<rhs[i]<<" ";
	}
  cout<<endl;*/

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			for (int k = 0; k < n; ++k)
			{
				if (a[k]!=0)
				{
					int x=(a[i]+a[j]) * (a[k]);
					t+=upper_bound(lhs.begin(),lhs.end(),x)-lower_bound(lhs.begin(),lhs.end(),x);
				}
				else continue;
			}
		}
	}

	vector<int>::iterator l1;
	vector<int>::iterator u1;
	vector<int>::iterator l2;
	vector<int>::iterator u2;
	//vector<int>::iterator i;
	
	/*for (int i = 0; i < lhs.size(); ++i)
	{
		int u=lhs[i];
		//cout<<"u is "<<u<<endl;
		l=count(lhs.begin(),lhs.end(),u);
		//cout<<"in l "<<l<<endl;
		r=count(rhs.begin(),rhs.end(),u);
		t+=l*r;
		i=i+l-1;
		//cout<<t<<endl;
	}*/

	/*for (int i = 0; i <= lhs.size(); i++)
	{
		int p=lhs[i];
		//cout<<"p is "<<p<<endl;
		if (binary_search(rhs.begin(),rhs.end(),p))
		{
			l1=lower_bound(lhs.begin(),lhs.end(),p);
			u1=upper_bound(lhs.begin(),lhs.end(),p);
			l2=lower_bound(rhs.begin(),rhs.end(),p);
			u2=upper_bound(rhs.begin(),rhs.end(),p);
			t+=(u1-l1)*(u2-l2);
			/*cout<<"u is "<<*u1<<endl;
			cout<<"t iis "<<t<<endl;*
			i=(u1-lhs.begin());
			//cout<<"i is"<<i<<endl;
			if (i<=0)
			{
				//cout<<"breakin"<<endl;
				break;
			}
			
		}
		else continue;
	}*/
	cout<<t<<endl;

	return 0;
}