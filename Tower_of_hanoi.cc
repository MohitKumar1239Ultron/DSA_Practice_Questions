#include<iostream>
using namespace std;

void TOH(int n,char source,char destination,char auxilary){
	if(n==0)
		return;
	TOH(n-1,source,auxilary,destination);
	cout<<n<<" From "<<source<<" to "<<destination<<endl;
	TOH(n-1,auxilary,destination,source);
}

int main(){
	int n=3;
	TOH(3,'A','C','B');
	return 0;
}
