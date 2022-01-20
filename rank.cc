#include<iostream>
#include<string.h>
#include<bits/stdc++.h>

using namespace std;

int fact(int n){
	if(n==1)
		return 1;
	return n*fact(n-1);
}

int ROS(string str){
	int n = str.length();
	int rank = 1,i,j;
	int mul = fact(n);
	int count[256] = {0};
	for(i=0;i<n;i++)		
		count[str[i]]++;
	for(i=0;i<256;i++)			
		count[i] +=count[i-1]; 	
	for(i=0;i<n;i++)
		mul = mul/n-i;
		rank+=count[str[i]-1]*mul;
		for(j=str[i];j<256;j++)
			count[j]--;
	return rank;
}

int main(){
	string str = "acb";
	cout<<ROS(str);
}
