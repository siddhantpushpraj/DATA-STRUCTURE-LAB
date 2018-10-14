/*
					EXEPERIMENT 1
Write a menu driven program that implements following operations on a  linear array:
"	Insert a new element at a specified position
"	Delete an element either whose value is given or whose position is given
"	To find the location of a given element
"	To display the elements of the linear array

*/

#include<iostream>
using namespace std;
class array
{                 
int a[10],limit,item,n,flag;
public:
	int i;
void read();
void display();
void insert();
void del();
void position();
};
void array::del()
{
	int pos,elem;
	int opt;
	flag=0;
	cout<<"enter 1 for delete elemet or 2 for position   ";
	cin>>opt;
	cout<<endl;
	 if(opt==1)
	 {  
	 	cout<<"elemet to delete"<<endl;
	 	cin>>elem;
	 	for(i=0;i<limit;i++)
		{
			if(a[i]==elem)
			{
				flag=1;
				pos=i+1;
				break;
			}
		}
	if(flag==1)
	{
		if(pos<=limit)
	{
		for(int i=pos-1;i<=5;i++)
			a[i]=a[i+1];
    }	
	}
	if(flag==0)
	cout<<"element not found";
	limit--;
	 }
	else if(opt==2)
	{
		cout<<"enter position to delete"<<endl;
		cin>>pos;
	if(pos<=limit)
	{
	for(int i=pos-1;i<=5;i++)
	a[i]=a[i+1];
    }
	else
	cout<<"out of range";
	limit--;
	}
}

void array::position()
{	
	int elem1;
	flag=0;
	cout<<"to find element"<<endl;
	cin>>elem1;
	for(i=0;i<limit;i++)
	{
		if(a[i]==elem1)
		{
			flag=1;
			cout<<"pos of element is "<<i<<endl;
			break;
		}
	}
	if(flag==0)
	cout<<"element not found";
	
}

void array::insert()
{	
	int e,p;
	cout<<"enter element and pos respectively "<<endl;
	cin>>e>>p;
	for(int  i=limit;i>=p;i--)
	{
		a[i]=a[i-1];
	}
	a[p-1]=e;
	if(p>limit)
		limit=p;
	else
	limit++;
}

void array::read()
{

cout<<"enter  size   ";
cin>>limit;
cout<<endl;
cout<<"element of araray"<<endl;
for(i=0;i<limit;i++)
{
cin>>a[i];
}
n=i;
cout<<endl;
}

void array::display()
{
cout<<"OUTPUT "<<endl;
cout<<"The array is: "<<endl;
for(i=0;i<limit;i++)
{
cout<<a[i]<<"   ";
}
cout<<endl;
} 
int main()
{
array obj;
int x;
cout<<" insert element in array"<<endl;
obj.read();
cout<<"enter 1 for insert element in array at given position "<<endl;
cout<<"enter 2 for delete element from array"<<endl;
cout<<"enter 3 to find the position of element"<<endl;
cout<<"enter 4 for display element of an array"<<endl;
cout<<"5 or greater  than 5 for exit"<<endl;
cin>>x;
while(x<5)
{
	
	if(x==1)
	{
		obj.insert();
		cout<<"enter option"<<endl;
		cin>>x;
	}
	if(x==2)
	{
		obj.del();
		cout<<"enter option"<<endl;
		cin>>x;
	}
	if(x==3)
		{
			obj.position();
			cout<<"enter option"<<endl;
			cin>>x;
		}
	if(x==4)
	{	
		obj.display();
		cout<<"enter option"<<endl;
			cin>>x;
	}

}

}
