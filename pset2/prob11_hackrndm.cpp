#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n,k,u,m=0,r=0;
	cin>>n>>k;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	vector<int> v(a,a+n); 
	for (int i = 0; i <= n-1; ++i)
	{
		u=v[i];
		/*int x;
		x=binary_search(a,u+k);
		*/
		/*int low=0, high=n-1,mid;
		while(low<=high)
		{
			mid=low+(high-low)/2;
			if (a[mid]==u+k)
			{
				m=1;
				//r++;
				break;
			}
			else if (a[mid]<u+k)
			{
				low=mid+1;
			}
			else high = mid-1;
		}
		if (m==1)
		{
			r++;
		}
		m=0;*/
		if(binary_search(v.begin(),v.end(),u+k))
			r++;
		else continue;
	} 

	/* int *p;
	for (int i = 0; i < n; ++i)
	{
		p=find(a,a+n,a[i]+k);
		if (p!=a+n)
		{
			r++;
		}
		else continue;
	}*/

	cout<<r<<endl;
	return 0;
}