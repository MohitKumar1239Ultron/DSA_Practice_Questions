#include<iostream>
#include<string.h>
#include<bits/stdc++.h>

using namespace std;

int iscountsame(int ctxt[],int cptr[]){
	int i;
	for(i=0;i<256;i++){
		if(ctxt[i] != cptr[i])
			return 0;
	}
	return 1;
}

bool findanagram(string txt,string ptr){
	int ctxt[256] = {0};
	int cptr[256] = {0},i;
	for(i=0;i<ptr.length();i++){
		cptr[ptr[i]]++;
		ctxt[txt[i]]++;
	}
	for(i=ptr.length();i<txt.length();i++){
		if(iscountsame(ctxt,cptr)){
			return true;
		}
		else{
		
			ctxt[txt[i]]++;
			ctxt[txt[i-ptr.length()]]--;
		}
	}
	return false;
}

int main(){
	string str1 = "Mohit";
	string str2 = "oih";
	if(findanagram(str1,str2) == false)
		cout<<str2<<" is not it's anagram ";
	else
		cout<<"Yes, It is anagram of "<<str1;
	return 0;
}
