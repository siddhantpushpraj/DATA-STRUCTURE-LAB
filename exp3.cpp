/*
							EXPERIMENT 3
   Write a program to accept N integers from the user and store them in an array. Sort the array in ascending order using Bubble sort. 
   Then accept another number from the user, search whether that number exists in the array using Binary Search. 
   If it does, display its index and if it doesn't, then print that the number is not found in the array.
*/
#include<iostream>
using namespace std;
class bubsort
{                 
int a[60],limit,item,n,flag;
public:
	int i,temp,j,x;
void read();
void search();
void sort();
void display();
};

void bubsort::display()
{
cout<<"OUTPUT "<<endl;
cout<<"The array is: "<<endl;
for(i=0;i<limit;i++)
{
cout<<a[i]<<"   ";
}
cout<<endl;	
}

void bubsort::read()
{
	cout<<" Bubble Sort and binary search  "<<endl;
cout<<"enter  size   ";
cin>>limit;
cout<<endl;
cout<<"element of araray"<<endl;
for(i=0;i<limit;i++)
{
cin>>a[i];
}

cout<<endl;
}

void bubsort::search()
{
	cout<<" Enter the element to be searched:  ";
	cin>>x;
	i=0;
while (i <= limit) 
    { 
        int m = i + (limit-i)/2; 
        if (a[m] == x) 
            {
            	flag=1;
            	break;
			}
        if (a[m] < x) 
            i = m + 1; 
        else
            limit = m - 1; 
    } 
  if(flag==1)
cout<<"The item found at index   "<<i;
else
cout<<" Sorry!The element was not found ";
} 


void bubsort::sort()
{
	for(i=0;i<limit;i++)
 {
	for(j=i+1;j<limit;j++)
		{
			if(a[i]>a[j])
				{
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
		}
 } 
}
int main()
{
bubsort bs;
bs.read();
cout<<"Before sorting the array  "<<endl;
bs.display();
bs.sort();
cout<<"After sorting the array  "<<endl;
bs.display();
bs.search();


}
