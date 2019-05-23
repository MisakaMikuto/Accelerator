#include<iostream>
using namespace std; 
struct edge{
	int next;
	int v;
	int w;
}G[maxm];
int n,m,cnt;
int head[maxn]; 

void add(int u,int v,int w)
{
	edge[++cnt].next=head[u];
	edge[cnt].w=w;
	edge[cnt].next=v;
	head[u]=cnt;
 }
 int main() {
	int s, t, w;
	cin >> n >> m;
	for(int i=1; i<=m; i++) {
		cin >> s >> t >> w;
		Add(s, t, w);
	}
}

for(int i=head[st]; i!=0; i=edge[i].next) //遍历
