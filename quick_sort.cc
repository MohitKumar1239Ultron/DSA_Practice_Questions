#include<iostream>
using namespace std;

void swap(int *a,int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

void printarray(int a[],int n){
	int i;
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";		
	}
	cout<<endl;
}

int partition(int a[],int low,int high){
	int piv = a[high];
	int i = (low-1);
	for(int j = low;j < high;j++)
	{
		if(a[j]<=piv){
			i++;
			swap(&a[i],&a[j]);
			
	    }
    }
	swap(&a[i+1],&a[high]);
	return(i+1);
}

void quicksort(int a[],int low,int high){
	if(low<high)
	{	
		int pi = partition(a, low, high);
		quicksort(a, low, pi-1);
		quicksort(a, pi+1, high);
	}
	
}

int main()
{
	int n,i;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	quicksort(a, 0, n-1);
	cout<<"\n";
	printarray(a, n);
}
