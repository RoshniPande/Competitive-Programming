#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define FOR(i,a,b) for(int i = a; i < b; ++i)
#define lli long long int
bool vis[10005];
int lev[10005];
vector<int> adj[10005];
void ini(bool vis[],int n)
{
	for (int i = 0; i <= n; ++i)
	{
		vis[i]=false;
	}
}
void init(int lev[], int n)
{
	for (int i = 0; i <= n; ++i)
	{
		lev[i]=0;
	}
}

void find(int x)
{
	queue<int> q;
	q.push(x);
	vis[x]=true;
	lev[x]=0;
	while(!q.empty())
	{
		int u=q.front();
		q.pop();
		for (int i = 0; i < adj[u].size(); ++i)
		{
			int y=adj[u][i];
			if (!vis[y])
			{
				q.push(y);
				vis[y]=true;
				lev[y]=lev[u]+1;
			}
		}
	}
}

int main()
{
	int n,r=0,node=0;
	cin>>n;
	//vector<int> adj[10005];
	FOR(i,1,n)
	{
		int a,b;
		cin>>a>>b;
		adj[a].pb(b);
		adj[b].pb(a);
	}
	ini(vis,n);
	find(1);
	for (int i = 1; i <= n; ++i)
	{
		if (lev[i]>r)
		{
			r=lev[i];
			node=i;
		}
	}
	init(lev,n);
	ini(vis,n);
	find(node);
	r=0;
	for (int i = 1; i <= n; ++i)
	{
		r=max(lev[i],r);
	}
	cout<<r<<endl;
	
	return 0;
}