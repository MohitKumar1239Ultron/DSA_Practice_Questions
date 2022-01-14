#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int i,o;
	int cx = 1;
	for(o=1;o<=n;o++){
		for(i=1;i<=n;i++){
			if(i<=cx || i>=n-cx+1){
				cout<<i;
			}
			else{
				cout<<" ";
			}
		}
		if(o<=n/2)
			cx++;
		else
			cx--;
		cout<<"\n";
	}
}
