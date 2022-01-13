#include<iostream>
using namespace std;

bool prime(int n){
	int i;
	if(n==0||n==1)
		return false;
	for(i=2;i<n;i++){
		if(n%i==0)
			return false;
	}
	return true;
}

int main(){
	int n,i;
	cin>>n;
	for(i=1;i<=n;i++){
		if(prime(i)){
			cout<<i<<" ";
		}
	}	
	return 0;
}
