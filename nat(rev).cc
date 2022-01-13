#include<iostream>
using namespace std;

int nat(int n){
	if(n==1)
		return 1;
	cout<<n<<" ";
	return nat(n-1);
}

int main(){
	int n;
	cin>>n;
	cout<<nat(n);
	return 0;
}
