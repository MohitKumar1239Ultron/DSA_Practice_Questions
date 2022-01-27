#include<bits/stdc++.h>
#include<string.h>
#include<vector>

using namespace std;

int reverse(string s){
	int i;
	vector<string> tmp;
	string str = " ";
	for(i=0;i<s.length();i++){
		if(s[i] == ' '){
			tmp.push_back(str);
			str = " ";
		}
		else
			str+=s[i];
	}
	tmp.push_back(str);
	for(i=tmp.size()-1;i>0;i--){
		cout<<tmp[i]<<" ";
	}
	cout<<tmp[0]<<endl;
}

int main(){
	string str = "Mohit Kumar";
	reverse(str);
	return 0;
}
