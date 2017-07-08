#include <bits/stdc++.h>
using namespace std;
#define pb push_back

int createset(int x, int p[], int rank[])
{
	p[x]=x;
	rank[x]=0;
}
int findset(int x, int p[])
{
	if (p[x]!=x) p[x]=findset(p[x],p);
	return p[x];
}
void mergeset(int x, int y, int p[], int rank[])
{
	int p_x=findset(x,p);
	int p_y=findset(y,p);
	if (rank[p_x]==rank[p_y] and p_x>p_y)
	{
		p[p_y]=p_x;
		rank[p_x]+=1;
	}
	else if (rank[p_x]==rank[p_y] and p_x<p_y)
	{
		p[p_x]=p_y;
		rank[p_y]+=1;
	}
	else if (rank[p_x]>rank[p_y]) p[p_y]=p_x;
	else p[p_x]=p_y;
}

int main()
{
	int n,m,cost0=0,ans=0;
	cin>>n>>m;
	std::vector<int> adj[n+1];
	int p[103]={0},rank[103]={0};
	int r[102]={0};
	for (int i = 1; i <= n; ++i)
	{
		int k;
		cin>>k;
		if (k==0) {cost0++; adj[i].pb(105); continue;}
		for (int j = 1; j <= k; ++j)
		{
			int x;
			cin>>x;
			adj[i].pb(x);
		}
	}
	if (cost0==n)
	{
		cout<<cost0<<endl;
		return 0;
	}
	for (int i = 1; i <= n; ++i) createset(i,p,rank);
	for (int i = 1; i <= n; ++i)
	{
		if (adj[i].size()==1) continue;
		for (int j = 1; j < adj[i].size(); ++j)
		{
			mergeset(adj[i][j-1],adj[i][j],p,rank);
		}
	}
	/*
	cout<<"total zeroes "<<cost0<<endl;
	ans=ans-1+cost0;*/
	for (int i = 1; i <= n; ++i)
	{
		if (adj[i][0]==105) continue;
		int j=findset(adj[i][0],p);
		//cout<<"parent node "<<j<<endl;
		r[j]=1;
	}
	for (int i = 1; i <= n; ++i)
	{
		r[i]+=r[i-1];
		//if (r[i]!=0) ans++;
	}
	ans=r[n]-1;
	cout<<ans+cost0<<endl;
	
	return 0;
}
