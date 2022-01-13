#include<iostream>
using namespace std;

int main(){
	int n,n1=0,n2=1,n3,i,j;
	cin>>n;
	cout<<"0 "<<"1";
	for(i=2;i<=n;i++){
		n3=n1+n2;
		n1=n2;
		n2=n3;
		cout<<" "<<n3;
	}
}
