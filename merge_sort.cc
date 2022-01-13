#include<iostream>
using namespace std;

void merge(int arr[],int lb,int mid,int ub)
{
	int x = lb;
	int y = mid+1;
	int z = lb;
	int res[ub+1];
	while(x<=mid && y<=ub){
		if(arr[x]>arr[y]){
			res[z]=arr[y];
			y++;
			z++;
		}
		else
		{
			res[z] = arr[x];
			x++;
			z++;
		}
	}
	while(x<=mid){
		res[z] = arr[x];
		x++;
		z++;
	}
	while(y<=ub){
		res[z] = arr[y];
		y++;
		z++;
	}
	for(int i=lb;i<=ub;i++)
	{
		arr[i] = res[i];
	}

}

void mergesort(int arr[],int lb,int ub)
{
	if(lb<ub)
	{
		int mid = (lb+ub)/2;
		mergesort(arr,lb,mid);
		mergesort(arr,mid+1,ub);
		merge(arr,lb,mid,ub);
	}
	else
	{
		return;
	}
}

void display(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main()
{
	int n,i;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	mergesort(arr,0,n-1);
	display(arr,n);
}
