#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main(){
	int i,count=0;
	char s[50];
	gets(s);
	for(i=0;i<s[i]!='\0';i++){
		if(s[i] == ' '|| s[i] == '\n' || s[i] == '\t')
			count++;
	}
	cout<<" No of words are : "<<count+1;
	return 0;
}
