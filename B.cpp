#include<bits/stdc++.h>
#define pii pair<int, int>
#define ll long long
#define pb emplace_back
#define endl '\n'
#define IOS ios::sync_with_stdio(0);cin.tie(0);

using namespace std;

struct Student {
	int want;
	int idx;
};

vector<Student> stu;
vector<int> rec[200001];
vector<int> final[1001]; 
int N, M, K;

signed main(){
	IOS;
	cin >> N >> M >> K;
	for(int i=0;i<N;i++)
	{
		int tmp;cin >> tmp;
		stu.pb(Student{i, tmp});
	}	
	sort(stu.begin(), stu.end(), [](Student a, Student b)->bool{return a.want < b.want;});	
	for(int i=1;i<=N;i++)
	{
		for(int p=0;p<5;p++)
		{
			int tmp;
			cin >> tmp;
			rec[i].pb(tmp);
		}
	}
	for(auto x:stu)
	{
		bool ok = false;
		for(auto school : rec[x.idx])
		{
			if(!ok){
				if(final[school].size() < K )
				{
					final[school].pb(x.idx);
					ok = true;
				}
			}	
		}
	}
	for(int i=1;i<=M;i++)
	{
		cout << final[i].size() << ' ';
		sort(final[i].begin(), final[i].end());
		for (int j=0;j<final[i].size();j++)
		{
			if(j == final[i].size()-1) 
				cout << final[i][j] ;
			else
				cout << final[i][j] << ' ';
		}
		cout << endl;
	}	
	
	return 0;
}

