#include<iostream>
#include<cstring>
#include<cstdlib>
#include<bits/stdc++.h>

using namespace std;

bool findrotation(string s1,string s2){
	s1 = s1+s1;	
	if(s1.find(s2)){
		return true;
	}
	return false;
}

int main(){
	string s1 = "Mohit";
	string s2 = "itMoh";
	if(findrotation(s1,s2) == false)
		cout<<"Not Rotated";
	else
		cout<<"Rotated";
	return 0;
}
