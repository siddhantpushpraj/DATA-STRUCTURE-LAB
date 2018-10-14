/*
							EXPERIMENT 2
	Write a program to accept N numbers from the user and store them in an array. 
	Then, accept another number from the user and search that using Linear Search
*/
#include<iostream>
using namespace std;
class lsearch
{                 
int a[60],limit,item,n,flag;
public:
	int i;
void read()
{
cout<<" Linear Search  "<<endl;
cout<<"enter  size   ";
cin>>limit;
cout<<endl;
cout<<"element of araray"<<endl;
for(i=0;i<limit;i++)
{
cin>>a[i];
}
cout<<" Enter the element to be searched:  ";
cin>>item;
cout<<endl;
}
void search()
{
for(i=0;i<limit;i++)
{
if(a[i]==item)
{
flag=1;
break;
}
else
flag=0;
}
if(flag==1)
cout<<"The item found at index   "<<i<<"  "<<endl;
else
cout<<" Sorry!The element was not found ";
}
void display()
{
cout<<"OUTPUT "<<endl;
cout<<"The array is: "<<endl;
for(i=0;i<limit;i++)
{
cout<<a[i]<<"   ";
}
cout<<endl;
}
};
int main()
{
lsearch ls;
ls.read();

ls.search();
ls.display();

}
