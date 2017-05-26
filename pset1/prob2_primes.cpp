#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
	int t;
	cin>>t;
	long long int x,y;
	int r=0,o;
	for (int i = 0; i < t; i++)
	{
		cin>>x>>y;
		if (x==1) x++;

		if (x<=2)
		{
			cout<<"2"<<endl;
			x++;
		} 
		long long int p;
		if (x%2==0)
		{
			o=1;
		}
		if (x%2==1)
		{
			o=0;
		}
		
		
		for (p=x+o; p <= y; p+=2)
		{	
			//if (p==1) continue;
			if (p==2) cout<<"2"<<endl;
			
			for (long long int j = 3; j <= ceil(sqrt(p)); j+=2)
			{
				//cout<<"i is "<< i<<endl;
				if (p%j==0)
				{
					r++;
					break;
				}

				else continue;
			}
			
			if (r==0)
			{
				if (p!=1 && x!=2) cout<<p<<endl;					
			}
			r=0;			
		}		
		//cout<<endl;
	}
	   
	/*int n,m,i,j,flag,t,k;
    cin>>t;
    
  for(k=1;k<=t;k++)
   {
	    cin>>n>>m;
	    
	    if(n==2)
	      cout<<"2"<<endl;
	    if((n&1)==0)
	       n=n+1;
	    else
	       n=n;
       
    
    	for(i=n;i<=m;i=i+2)
    	{
	        if(i==1)
	        {
	          cout<<"2"<<endl;
	          continue;
	        }
	        flag=0;
        
	        for(j=3;j<=sqrt(i);j=j+2)
	        {
	           if(i%j==0)
	           {
	             flag=1;
	             break;
	           }
        	}
       
	       if(flag==0)        
	        cout<<i<<endl;
   		}   
    }
*/
	return 0;
}