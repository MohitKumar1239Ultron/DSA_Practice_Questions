#include<iostream>
using namespace std;

int main(){
	int x,y,z,n=5;
	
	for(x=1;x<=n;x++){
		z=1;
		for(y=1;y<=2*n-1;y++){
			if(y>=6-x&&y<=4+x&&z){
				cout<<"*";
				z=0;	
			}
			else{
				cout<<" ";
				z=1;
			}
		}
		cout<<"\n";
	}
} 
