#include<stdio.h>
#include<string.h>

int main(){
	int i,j,k,n;
	char s[50];
	gets(s);
	for(i=0;i<strlen(s);i++){
		for(j=i+1;s[j]!='\0';j++){
			if(s[i] == s[j]){
				for(k=j;s[k]!='\0';k++){
					s[k] = s[k+1];
				}
			}
		}
	}
	printf("\n The final string is : %s",s);
	return 0;
}
