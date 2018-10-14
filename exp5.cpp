/*
				Experiment 5
Write a menu driven program that implements the following operations on a   
Stack(either implement as Linear array and as Linked list) :
•	Push 
•	Pop  
•	Display Top of the stack

*/
#include<iostream>
using namespace std;
#define size 10
class stack1
{
int arr[size];
int top;
public:
	stack1()
    	{
		top=-1;
		}
	void push(int,int);
	void pop();
	bool is_empty();
	void peek();	
};
void stack1::push(int x,int max)
{
	if(top==size)
	cout<<"overflow"<<endl;
	else
	{
		top++;
		arr[top]=x;
	}
}

void stack1::pop()
{
	if(top==-1)
	cout<<"underflow"<<endl;
	top--;
}
void stack1::peek()
{
	cout<<arr[top]<<endl;
}
int main()
{    stack1 s;
	int x,n,max;
	cout<<"enter size of stack but less than 10"<<endl;
	cin>>max;
	cout<<"1 for push,2 for pop,3 for peek ,4 for exit"<<endl;
	cin>>n;
	while(n!=4)
	{
     if(n==1)
	 {
	for(int i=0;i<max;i++)
	{   cin>>x;
		s.push(x,max);
		
		
    }
    cout<<"option"<<endl;
		cin>>n;
		
	}
		  
    if(n==2)
    {
	
    
    	s.pop();
    	cout<<"option"<<endl;
		cin>>n;
    }
    if(n==3)
     {
	 s.peek();
	cout<<"option"<<endl;
		cin>>n;
}
     if(n>3)
     break;
     
    
}
}
