#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
	long long int cnt1,cnt2,x,y,low=0,high=pow(9,10);
	cin>>cnt1>>cnt2>>x>>y;
	while(low<high)
	{
		int mid=low+(high-low)/2,f1=mid/x /*num div by x*/,f2=mid/y,both=mid/(x*y);
		if (mid-f1>=cnt1 and mid-f2>=cnt2 and mid -both>=(cnt1+cnt2))
		{
			high=mid;
		}
		else
		{
			low=mid+1;
		}

	}
	cout<<high<<endl;


	return 0;
}
