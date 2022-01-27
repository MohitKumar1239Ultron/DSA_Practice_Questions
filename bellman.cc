#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

struct node{
	int u;
	int v;
	int wt;
	node(int first, int second, int weight){
		u = first;
		v = second;
		wt = weight;
	}
};

int main(){
	int n,m,i;
	int u,v,wt;
	cin>>n>>m;
	vector<node> edges;
	for(i=0;i<n;i++){
		cin>>u>>v>>wt;
		edges.push_back(node(u,v,wt));
	}
	int src;
	cin>>src;
	int in = 100000000;
	vector<int> dist(n, in);
	dist[src] = 0;
	for(i=1;i<=n-1;i++){
		for(auto it: edges{
			if(dist[it.u] + it.wt < dist[it.v]){
				dist[it.v] = dist[it.u] + it.wt;
			}
		}
	}
	int flag = 0;
	for(auto it: edges){
		if(dist[it.u] + it.wt < dist[it.v]){
			cout<<"Negative Cycle";
			flag = 1;
			break;
		}
	}
	if(!flag){
		for(i=0;i<n;i++){
			cout<<i<<" "dist[i]<<endl;
		}
	}
	return 0;
}
