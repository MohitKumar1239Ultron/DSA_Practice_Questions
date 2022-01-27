#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int stairs(int n){
	if(n<=1)
		return n;
	int count[n];
	count[0] = 1;
	count[1] = 2;
	for(int i=3;i<n;i++){
		count[i] = count[i-1] + count[i-2];
		cout<<count[i];
	}
	return count[n-1];
}

int main(){
	int n;
	cin>>n;
	cout<<stairs(n);
	return 0;	
}
