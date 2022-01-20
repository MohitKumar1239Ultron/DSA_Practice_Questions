#include<string.h>
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,i;
	int count[256] = {0};
	cin>>n;
	string str_a[n]; 
	string str_b[n];
	for(i=0;i<n;i++){
		cin>>str_a[i];
	} 
	for(i=0;i<n;i++){
		cin>>str_b[i];
	}
	for(i=0;i<n;i++)
		count[str_a[i]]++;
	for(i=0;i<n;i++);
		count[str_b[i]]--;
	for(i=0;i<256;i++){
		if(count[i]!=0)
			cout<<"Not anagram";
		else
			cout<<"Anagram";
	}
	return 0;
}
