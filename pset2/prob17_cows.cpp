#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		int n,c;
		cin>>n>>c;
		int a[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		int low=0,high=a[n-1],mid=0;
		while(low<high)
		{
			int mid=low+(high-low)/2, cows=1,p=a[0],u=0;
			for (int i = 1; i < n; ++i)
			{
				if (a[i]-p>=mid)
				{
					cows++;
					//cout<<"i is "<<i<<endl;
					if (cows==c)
					{
						u++;
					//	cout<<"u is "<<u<<endl;
						break;
					}
					p=a[i];
					//cout<<"mid is "<<mid<<endl;
				}
				else u=0;
			}
			if (u>0)
			{
				low=mid+1;
			}
			else high=mid;
		}
		cout<<high-1<<endl;

		t--;
	}

	return 0;
}