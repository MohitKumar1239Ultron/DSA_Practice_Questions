#include<iostream>
using namespace std;

void insertion(int a[],int n){
	int j;
	for(j=0;j<n;j++){
		int key = a[j];
		int k = j-1;
		while(key<a[k] && k>=0){
			a[k+1] = a[k];
			--k;
		}
		a[k+1] = key;
	}
}

void print(int a[],int n){
	int i;
	for(i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<"\n";
}

int main(){
	int i,j,n;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	for(i=0;i<n;i++){
		if(i>0){
			insertion(a,i+1);
			print(a,i+1);
		}
	}
	return 0;
}
