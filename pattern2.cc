#include<iostream>
using namespace std;

int main(){
	int i,j,a = 5;
	for(i=0;i<a;i++){
		cout<<"\n";
		for(j=a-1-i;j>0;j--){
			cout<<" ";
		}
		for(j=0;j<=i;j++){
			cout<<"*";
		}
	}
} 
