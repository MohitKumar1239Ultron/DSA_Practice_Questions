#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int rob(int a[],int n){				
	if(n==1)					
		return a[0];
	int profit[n], i;
	profit[0] = a[0];
	profit[1] = max(a[0],a[1]);
	for(i=2;i<n;i++){
		profit[i] = max(profit[i-2] + a[i] , profit[i-1]);
	}
	return profit[n-1];
}

int main(){
	int n,i;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<rob(a,n);
	return 0;
}
