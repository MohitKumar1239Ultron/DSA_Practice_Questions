#include<iostream>
#include<bits/stdc++.h>
#include<string.h>

using namespace std;

void swap(int *a,int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void permutation(string s,int l,int r){
	int i;
	if(l==r)
		cout<<s<<endl;
	else
		for(i=l;i<=r;i++){
			swap(s[l],s[i]);
			permutation(s,l+1,r);
			swap(s[l],s[i]);
		}
}

int main(){
	string s = "abcdef";
	int n = s.size();
	permutation(s,0,n-1);
	return 0;
}
