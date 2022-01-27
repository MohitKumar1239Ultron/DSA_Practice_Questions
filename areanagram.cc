#include<bits/stdc++.h>
#include<string.h>
#include<iostream>

using namespace std;

bool anagram(string s1,string s2){
	int i;
	int n1 = s1.length();
	int n2 = s2.length();
	if(n1!=n2)
		return false;
	sort(s1.begin(),s1.end());
	sort(s2.begin(),s2.end());
	for(i=0;i<n1;i++){
		if(s1[i]!=s2[i])
			return false;
	}
	return true;
}

int main(){
	string s1 = "Maxemoder";
	string s2 = "Modemaxer";
	if(anagram(s1,s2) == true)
		cout<<"2 strings are anagram of each other";
	else
		cout<<"Wrong strings";
	return 0;
}
