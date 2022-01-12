#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int i,j;
	int a=0,b=1,c;
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			cout<<b<<" ";
			c=a+b;
			a=b;
			b=c;
		}
		cout<<"\n";
	}
	return 0;
}
