#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,i;
	cin>>n;
	cout<<"1 + ";
	for(i=1;i<=n;i++){
		cout<<"1/"<<pow(3,i);
		if(i==n)
			cout<<" ";
		else
			cout<<" + ";
	}	
}
