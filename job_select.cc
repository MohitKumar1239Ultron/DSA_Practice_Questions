#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int> &a, pair<int,int> &b){
	return a.second<=b.second;
}

int main(){
	int n,i;
	cin>>n;
	vector<pair<int,int> > arr(n);
	for(i=0;i<n;i++){
		cin>>arr[i].first>>arr[i].second;
	}
	sort(arr.begin(),arr.end(),cmp);
	int ans = 1, lim=arr[0].second;
	for(i=1;i<n;i++){
		if(arr[i].first>=lim){
			lim = max(lim,arr[i].second);
			ans++;
		}		
	}
	cout<<ans<<"\n";
}
