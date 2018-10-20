/*
Write a program to accept N numbers from the user in one array and M numbers in another array.
 Then, sort the arrays using Selection Sort and then merge these two arrays using Merge Sort.
*/
#include<iostream>
using namespace std;
void selectionsort(int A[],int n)
{
	int i,k,j,temp,min;
	for(int i=0;i<n;i++)
	{     	
		min=A[i];
		k=i;
		for(int j=i;j<n;j++)
		{    
		
			if(min>A[j])
			{
				min=A[j];
				k=j;
			}
		}
	if(k!=i)
	{
			A[k]=A[i];
			A[i]=min;
	}
	}
}
void merge(int arr[], int l, int m, int r) 
{ 
    int i, j, k; 
    int n1 = m - l + 1; 
    int n2 =  r - m; 
  
    int L[n1], R[n2]; 
  
    for (i = 0; i < n1; i++) 
        L[i] = arr[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = arr[m + 1+ j]; 
  

    i = 0; 
    j = 0;  
    k = l; 
    while (i < n1 && j < n2) 
    { 
        if (L[i] <= R[j]) 
        { 
            arr[k] = L[i]; 
            i++; 
        } 
        else
        { 
            arr[k] = R[j]; 
            j++; 
        } 
        k++; 
    }
    while (i < n1) 
    { 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
    while (j < n2) 
    { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
} 
void mergeSort(int arr[], int l, int r) 
{ 
    if (l < r) 
    { 
        int m = l+(r-l)/2;
		
        mergeSort(arr, l, m); 
        
        mergeSort(arr, m+1, r); 
         merge(arr, l, m, r); 
  
        
	}
}
print_arr(int arr[60],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<"  ";	
	}	
	cout<<endl<<"---------------------------------"<<endl;;
}
int main()
{
	int arr1[30],size1,arr2[30],size2,size3,arr[60],j=0;
	cout<<"Size of 1st array   ";
	cin>>size1;
	cout<<endl<<"Insert element of 1st array "<<endl;
	for(int i=0;i<size1;i++)
	{
		cin>>arr1[i];
	}
	cout<<"Element of 1st array"<<endl;
	print_arr(arr1,size1);
	cout<<"Size of 2nd array   ";
	cin>>size2;
	cout<<endl<<"Insert element of 2nd array "<<endl;
	for(int i=0;i<size2;i++)
	{
		cin>>arr2[i];
	}
	cout<<"Element of 2nd array"<<endl;
	print_arr(arr2,size2);
	selectionsort(arr1,size1);
	selectionsort(arr2,size2);
	cout<<"1st array after selection sort"<<endl;
	print_arr(arr1,size1);
	cout<<"1st array after selection sort"<<endl;
	print_arr(arr2,size2);
	size3=size1+size2;
	for(int i=size1;i<size3;i++)
	{
		arr1[i]=arr2[j];
		j++;	
	}	
	mergeSort(arr1, 0,size3 - 1); 
	cout<<"After merging two array and apply merge sort"<<endl;
	print_arr(arr1,size3);
	return 0;
}
