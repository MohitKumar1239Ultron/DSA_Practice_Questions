#include<iostream>
using namespace std;

void swap(int *a,int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void print(int a[], int n){
	int i;
	for(i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

void selection(int a[], int n){
	int s,i,j;
	for(s=0;s<n;s++){
		int min_index = s;
		for(i=s+1;i<n;i++){
			if(a[i]<a[min_index])
				min_index = i;
		}
		swap(&a[min_index], &a[s]);
		cout<<"\nsteps "<<s+1<<" :";
		for(j=0;j<n;j++){
			cout<<a[j]<<" ";
		}
		cout<<"\n";
	}
}

int main(){
	int n;
	cin>>n;
	int arr[n],i;
	for(i=0;i<n;i++)
		cin>>arr[i];
	selection(arr, n);
	cout<<"\n";
	print(arr,n);	
	return 0;
}
