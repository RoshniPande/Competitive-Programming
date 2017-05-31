#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int n,x,r=0,a[4],u=0;
	cin>>n>>x;
	int h[7]={1,1,0,1,0,0,1};
	//int m[n][n],l[n][n];
	int m[n][n];
	vector<int> p;
	vector<int> q;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			long long int c=pow((i+1)*(j+1),2);
			c=c%7;
			if (h[c]==0)
    		{
    			m[i][j]=1;
    		}
    		else
    		{
    			m[i][j]=2;
    		}
    		//l[i][j]=m[i][j];
    		p.push_back(m[i][j]);
		}
	}
	a[0]=0;
	for (int j = 0; j < n; ++j)
    {    		
	   	for (int i = n-1; i >= 0; i--)
    	{	    		
    		q.push_back(m[i][j]); 
	   		if (p[u]!=q[u])
			{
				r++;
			}
			u++;  		
    	}
    } a[1]=r;r=0; u=0;
    q.clear();
	for (int i = n-1; i >= 0; i--)
	{
		for (int j = n-1; j >= 0; j--)
		{
			q.push_back(m[i][j]); 
	    	if (p[u]!=q[u])
			{
				r++;
			}
			u++;
		}
	}a[2]=r;r=0; u=0;
    q.clear();
    for (int j = n-1; j >= 0; j--)
	{
		for (int i = 0; i < n; ++i)
		{
			q.push_back(m[i][j]); 
	    	if (p[u]!=q[u])
			{
				r++;
			}
			u++;
		}
	}a[3]=r;r=0; u=0;
    q.clear();

	for (int queries = 0; queries < x; ++queries)
    {
    	int angle;
    	cin>>angle;
    	angle=(angle/90)%4;
    	cout<<a[angle]<<endl;
	   
	   /* while(angle--)	
	    {
	    	for (int j = 0; j < n; ++j)
	    	{    		
		    	for (int i = n-1; i >= 0; i--)
		    	{
		    		q.push_back(l[i][j]);   		
		    	}
		    }
		    int u=0;
		    if (angle==1) break;
		    
		    for (int i = 0; i < n; ++i)
			{
				for (int j = 0; j < n; ++j)
				{
					l[i][j]=q[u++];
				}
			}
			q.clear();
		}*/
		

		/*if (angle==0)
		{
			cout<<"0"<<endl;
			continue;
		}

		int u=0;
		if (angle==1)
		{
			for (int j = 0; j < n; ++j)
	    	{    		
		    	for (int i = n-1; i >= 0; i--)
		    	{
		    		q.push_back(m[i][j]); 
		    		if (p[u]!=q[u])
					{
						r++;
					}
					u++;  		
		    	}
		    }
		}
		if (angle==2)
		{
			for (int i = n-1; i >= 0; i--)
			{
				for (int j = n-1; j >= 0; j--)
				{
					q.push_back(m[i][j]); 
		    		if (p[u]!=q[u])
					{
						r++;
					}
					u++;
				}
			}
		}
		if (angle==3)
		{
			for (int j = n-1; j >= 0; j--)
			{
				for (int i = 0; i < n; ++i)
				{
					q.push_back(m[i][j]); 
		    		if (p[u]!=q[u])
					{
						r++;
					}
					u++;
				}
			}
		}
		q.clear();
		cout<<r<<endl;
		r=0;u=0;*/
    }
	return 0;
}


/*int main()
{
	int n,q;
	cin >> n >> q;
	int o=pow((n*n),2);
	int h[o+1];
	h[0]=0;
	h[1]=1;
	h[2]=2;
	h[3]=3;
	for (int i = 4; i <= o; ++i)
	{
		h[i]=h[i-1]+(2*h[i-2])+(3*h[i-3]);
	}
	char m[n][n],l[n][n];
    for (int i = 0; i < n; ++i)
    {
    	for (int j = 0; j < n; ++j)
    	{
    		int g=pow((i+1)*(j+1),2);
    		if (h[g]%2==0)
    		{
    			m[i][j]=88;
    		}
    		if (h[g]%2!=0)
    		{
    			m[i][j]=89;
    		}
    	}
    }
  	for (int i = 0; i < n1; ++i)
    {
    	for (int j = 0; j < n1; ++j)
    	{
    		l[i][j]=m[i][j];
    		cout<<l[i][j];
    	}
    	cout<<endl;
    }

    for (int queries = 0; queries < q; ++queries)
    {
    	int angle;
    	cin>>angle;
    	angle=(angle/90)%4;
    	
    	if (angle==4)
    	{
    		cout<<"0"<<endl;
    		continue;
    	}
    	for (int i = 0; i < n1; ++i)
    	{
	    	for (int j = 0; j < n1; ++j)
	    	{
	    		m[i][j]=l[i][j];
	    	}
    	}
    	int r=0,c=0;

	    for (int j=1; j<=3*angle; j++)
	    {
	    	while(r<n-1)
	    	{   		
	    		int prev=m[r+1][c],now;
	    		for (int i = c; i < n; ++i)
	    		{
	    			now=m[r][i];
	    			m[r][i]=prev;
	    			prev=now;
	    		}
	    		r++; 

	    		for (int i = r; i < n; ++i)
	    		{
	    			now=m[i][n-1];
					m[i][n-1]=prev;
					prev=now;    			
	    		}
	    		for (int i = n-1; i >=c; i--)
	    		{
	    			now=m[n-1][i-1];
	    			m[n-1][i-1]=prev;
	    			prev=now;
	    		}

	    		for (int i = n-1; i >= r; i--)
	    		{
	    			now=m[i-1][c];
	    			m[i-1][c]=prev;
	    			prev=now;
	    		}
	    		c++;
	    		n--;
	    	}
	    }
	    cout<<endl;
     for (int i = 0; i < n1; ++i)
     {
    	for (int j = 0; j < n1; ++j)
    	{
    		cout<<m[i][j];
    	}
    	cout<<endl;
     }
	    int t=0;
	    for (int i = 0; i < n1; ++i)
	    {
	    	for (int j = 0; j < n1; ++j)
	    	{
	    		if (l[i][j]!=m[i][j])
	    		{
	    			t++;
	    		}
	    	}
	    }
	    cout<<t<<endl;
	    t=0;
    }


	return 0;
}
*/