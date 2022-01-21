#include<iostream>
#include<cstdlib>
#include<cstring>
#include<bits/stdc++.h>

using namespace std;

int main(){
	int i,len,n,freq[256] = {0};
	cin>>n;
	char s[n],ans;
	int max = -1;
	for(i=0;i<n;i++){
		cin>>s[i];
	}
	len = strlen(s);
	for(i=0;i<len;i++){
		freq[s[i]]++;
	}
	for(i=0;i<len;i++){
		if(max<freq[s[i]]){
			max = freq[s[i]];
			ans = s[i];
		}
	}
	cout<<"max occuring character is : "<<ans<<endl;
	return 0;
}
