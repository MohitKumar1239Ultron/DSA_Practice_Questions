#include<iostream>
using namespace std;

int main(){
	int i,j,rows=6;
	for(i=1;i<=rows;i++){
		for(j=1;j<=i;j++){
			cout<<rows-j;
		}
		printf("\n");
	}
	for(i=rows-1;i>0;i--){
		for(j=1;j<=i;j++){
			cout<<rows-j;
		}
		printf("\n");
	}
}
