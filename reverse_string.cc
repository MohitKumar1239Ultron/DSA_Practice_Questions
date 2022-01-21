#include<iostream>
#include<string.h>
#include<bits/stdc++.h>

using namespace std;

void rev(string& s1){
	int i,n,temp;
	n = s1.length();
	for(i=0;i<n/2;i++){
		temp = s1[i];
		s1[i] = s1[n-i-1];
		s1[n-i-1] = temp;	
	}
}

int main(){
	string s1 = "Mohit";
	rev(s1);
	cout<<s1;
}
