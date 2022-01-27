#include<bits/stdc++.h>
#include<iostream>

using namespace std;

bool cmp(pair<int,int> &a, pair<int,int> &b){
	float a1 = ((float)a.first/a.second);
	float b1 = ((float)b.first/b.second);
	return a1>=b1;
}
int main(){
	int n,i;
	cin>>n;
	vector<pair<int,int> > arr(n);
	for(i=0;i<n;i++){
		cin>>arr[i].first>>arr[i].second;
	}
	sort(arr.begin(),arr.end(),cmp);
	int w;
	cin>>w;
	int ans = 0 , z;
	for(i=0;i<n;i++){
		if(arr[i].second<=w){
			w-=arr[i].second;
			ans+=arr[i].first;
		}
		else{
			int left = w;
			float x = (float)arr[i].first/arr[i].second;
			x = x*left;
			ans += z;
			break;
		}
	}
	cout<<ans<<"\n";
}
