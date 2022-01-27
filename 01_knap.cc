#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int max(int a,int b){
	return  (a>b)?a:b;
}

int knapsack(int w, int wt[],int val[],int n){
	int i,j;
	vector<vector<int > >k(n+1 , vector<int>(w+1));
	for(i=0;i<=n;i++){
		for(j=0;j<=w;j++){
			if(i==0 || j==0)
				k[i][j] = 0;
			else if(wt[i-1] <= j){
				k[i][j] = max(val[i-1]+k[i-1][j-wt[i-1]],k[i-1][w]);
			}
			else
				k[i][j] = k[i-1][j];
		}
	}
	return k[n][w];
}

int main(){
	int n,i;
	cin>>n;
	int wt;
	cin>>wt;
	int w[n],val[n];
	for(i=0;i<n;i++){
		cin>>w[i];
	for(i=0;i<n;i++)
		cin>>val[i];
	cout<<knapsack(wt,w,val,n);
	return 0;
	}
}
