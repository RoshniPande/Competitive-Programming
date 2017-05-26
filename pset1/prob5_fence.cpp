#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
	int n,k,t=0,min=0,r;
	cin>>n>>k;
	int h[n+1];
	/*for (int i = 0; i < n; ++i)
	{
		cin>>h[i];
	}
	
	for (int i = 0; i < k; ++i)
	{
		min+=h[i];
		r=1;
	}

	for (int i = 1; i < n-k+1; i++)
	{		
		//cout<<endl;
		//cout<<h[i]<<endl;
		for (int j = 0; j < k; j++)
		{
			t+=h[i+j];
			//cout<<t<<" in "<<i<<endl;
		}
		

		if (t<min)
		{
			min=t;
			r=i+1;
			//cout<<"min now is "<<min<<endl;
		}
		t=0;
	}
	cout<<r<<endl; */
	h[0]=0;
	for (int i = 1; i < n+1; ++i)
	{
		cin>>h[i];
		h[i]+=h[i-1];
	}
	min=h[k];
	r=1;
	for (int i = k+1; i <= n; ++i)
	{
		if ((h[i]-h[i-k])<min)
		{
			min=h[i]-h[i-k];
			r=i-k+1;
		}
		
	}
	cout<<r<<endl;
	return 0;
}