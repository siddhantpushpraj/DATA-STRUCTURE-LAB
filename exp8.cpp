/*
Write a program to accept N numbers in an array, and then sort the array using Insertion Sort. 
Then accept a number from the user and insert it in the array according to the sequential order
*/

#include<iostream>
using namespace std;

int insertion(int a[],int item,int n)
{
int i,j,pos;
for(i=0;i<n;i++)
{
	if(a[i]>item)
	{
		pos=i;
		break;
	}
}
if(a[n-1]<item)
{
	a[n]=item;
}
else
{
		for( i=n+1;i>=pos;i--)
	{
		a[i]=a[i-1];
	}
	a[pos]=item;
}


}

void insertionSort(int arr[], int n)
{
   int i, key, j;
   for (i = 1; i < n; i++)
   {
       key = arr[i];
       j = i-1;
       while (j >= 0 && arr[j] > key)
       {
           arr[j+1] = arr[j];
           j = j-1;
       }
       arr[j+1] = key;
   }
}

void printArray(int arr[], int n)
{
   int i;
   for (i=0; i < n; i++)
       cout<<arr[i]<<"   ";
}
 
int main()
{
   int n;
   int arr[30];
   cout<<"size of array  ";
   cin>>n;
   cout<<"Element of array"<<endl;
   for(int i=0;i<n;i++)
   {
   	cin>>arr[i];
   }
   	cout<<"Before insertion sort"<<endl;
   	printArray(arr, n);
 	insertionSort(arr, n);
 	cout<<endl;
 	cout<<"After insertion sort"<<endl;
    printArray(arr, n);
    cout<<endl;
 	int ele;
 	cout<<"Element to insert in sorted array"<<endl;
 	cin>>ele;
 	insertion(arr,ele,n);
 	cout<<"array"<<endl;
 	printArray(arr,n+1);
    return 0;
    
}

