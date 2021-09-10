#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define IOS ios::sync_with_stdio(0);cin.tie(0);
using namespace std;

int n,m,k;
int rk[200001];
int lft[1001];
int sch[200001];
stack<int> ath[1001];

signed main(){
	IOS;
	cin>>n>>m>>k;
	for(int i=0;i<n;i++)
	{
		cin>>rk[i];
	}
	for(int i=0;i<m;i++)
	{
		lft[i]=k;
	}
	for(int i=0;i<n;i++)
	{
		sch[i]=-1;
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<5;j++)
		{
			int tmp;
			cin>>tmp;
			tmp--;
			if(lft[tmp]>0&&sch[rk[i]]==-1)
			{
				sch[rk[i]]=tmp;
				lft[tmp]--;
				ath[tmp].push(rk[i]);
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<sch[i]<<endl;
	}
	/*
	for(int i=0;i<m;i++)
	{
		cout<<k-lft[i];
		while(ath[i].empty()!=1)
		{
			cout<<' '<<ath[i].top();
			ath[i].pop();
		}
		cout<<endl;
	}
	*/
	return 0;
}


