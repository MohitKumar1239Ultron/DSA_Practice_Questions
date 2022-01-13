#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,i;
	cin>>n;
	for(i=1;i<=n;i++){
		cout<<pow(i,i);
		if(i==n)
			cout<<" ";
		else
			cout<<" + ";
	}	
}
