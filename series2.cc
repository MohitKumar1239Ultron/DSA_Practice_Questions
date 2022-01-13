#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,i;
	cin>>n;
	for(i=0;i<=n;i++){
		cout<<pow(2,i);
		if(i==n)
			cout<<" ";
		else
			cout<<" + ";
	}	
}
