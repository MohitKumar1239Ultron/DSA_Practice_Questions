#include<iostream>
using namespace std;

int fact(int n){
	if(n==1)
		return 1;
	cout<<n<<"+";
	if(n==2){
		cout<<"1";
	}
	return n*fact(n-1);
}

int main(){
	int n;
	cin>>n;
	int k = fact(n);
	cout<<"\n The factorial is :"<<k;
	return 0;
}
