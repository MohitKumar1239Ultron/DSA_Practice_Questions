#include<iostream>
using namespace std;

int main(){
	int i,j,a = 5;
	for(i=0;i<a;i++){
		cout<<"\n";
		for(j=1;j<=i;j++){
			cout<<" ";
		}
		for(j=a-i;j>0;j--){
			cout<<"*";
		}
	}
} 
