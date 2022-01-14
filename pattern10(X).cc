#include<iostream>
using namespace std;

int main(){
	int n,i,j,c=1;
	cin>>n;
	for(i=1;i<=5;i++){
		for(j=1;j<=5;j++){
			if(j==i||6-i==j){
					cout<<i;
			}
			else
				cout<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
