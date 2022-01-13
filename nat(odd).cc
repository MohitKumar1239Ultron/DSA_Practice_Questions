#include<iostream>
using namespace std;

int nat(int n){
	static int i = 1;
	if(n==1)
		return 2*i+1;
	cout<<(2*i++)+1<<" ";
	return nat(n-1);
}

int main(){
	int n;
	cin>>n;
	cout<<nat(n);
	return 0;
}
