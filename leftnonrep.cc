#include<iostream>
#include<string.h>
#include<bits/stdc++.h>

using namespace std;

int leftnonrep(string str){                                                                 
	int i,count[256];
	int temp = INT_MAX;
	for(i=0;i<256;i++)
		count[i] = -1;
	for(i=0;i<str.length();i++)
		if(count[str[i]] == -1)
			count[str[i]] = i;
		else
			count[str[i]] = -2;
	for(i=0;i<256;i++)
		temp = min(temp,count[i]); 
	return (temp == INT_MAX)?-1:temp;
}

int main(){
	string str = "Mohit";
	cout<<leftnonrep(str);
}
