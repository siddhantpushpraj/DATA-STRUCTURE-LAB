/*
Sort the list of integers using heap tree (Heap sort)
*/
#include<iostream>
using namespace std;

void heapify(int arr[],int n,int i)
{
	int l=2*i+1;
	int r=2*i+2;
	int large=i;
	
	if(l<n && arr[l]>arr[large])
	{
		 large=l;
	}

	if(r<n && arr[r]>arr[large])
	{
		 large=r;
	}
	if(large!=i)
	{
		swap(arr[i],arr[large]);
		heapify(arr,n,large);
	}
}
void build_heap(int arr[],int n)
{
	for(int i=(n/2-1);i>=0;i--)
	{
		heapify(arr,n,i);
	}
}
void heapsort(int arr[],int n)
{
	int heapsize=n;
	build_heap(arr,n);
	for(int i=n-1;i>=0;i--)
	{
		swap(arr[0],arr[i]);
	
		heapify(arr,i,0);
	}
}
int main()
{
	int arr[30];
	int size;
	cout<<"size"<<endl;
	cin>>size;
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];

	}
	heapsort(arr,size);
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<"  ";
	}
}
