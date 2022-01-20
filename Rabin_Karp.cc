#include<iostream>
#include<bits/stdc++.h>
#include<cstring>
#include<cstdlib>
#define d 256

using namespace std;

void search(char* pat, char* txt, int q){
	int n = strlen(txt);
	int m = strlen(pat);
	int i,j,p=0;
	int t=0,h=1;
	for(i=0;i<m-1;i++)
		h = (h * d)%q;
	for(i=0;i<m;i++){
		p = (d*p + pat[i])%q;
		t = (d*t + txt[i])%q;
	}
	for(i=0;i<=n-m;i++){
		if(p == t){
			for(j=0;j<m;j++){
				if(txt[i+j] != pat[j])
					break;
			}
			if(j == m){
				cout<<" at index "<<i<<" pattern found "<<endl;
			}
		}
		if(i<n-m){
			t = (d*(t-txt[i]*h) + txt[i+m])%q;
			if(t<0){
				t = t+q;
			}
		}
	}
}

int main(){
	char* txt = "abbacacadcds";
	char* ptr = "adc";
	int q = 101;
	search(ptr, txt, q);
	return 0;
}
