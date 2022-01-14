#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,i,j,s;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				s = a[j];
				a[j] = a[j+1];
				a[j+1] = s; 	
			}
		}
		cout<<"\n";
		
		cout<<"Steps "<<i+1<<" : ";
		for(j=0;j<n;j++){
			cout<<a[j]<" ";
		}
		cout<<"\n\n";
	}
	for(i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
