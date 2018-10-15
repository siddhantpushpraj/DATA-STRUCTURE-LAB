/*						
							EXPERIMENT 7(b)
Menu driven Program to demonstrate the implementation of various operations on a Circular queue (using a linear array and  a linked list)
*/

#include<iostream>
using namespace std;
#define MAX 50
class node
{
	public:
		node()
		{
			next=NULL;
		}
		int info;
		node *next;
}*front=NULL,*rear=NULL;
class cir_Queue
{
	public:
		void enqueue();
		void dequeue();
		void display();
};
void cir_Queue::enqueue( )
{     int element;
		cout<<"linked list element"<<endl;
	    cin>>element;
	node *ptr;
	 node *p=new node;
	 p->info=element;
	 p->next=p;
	if(front==NULL && rear==NULL)
	 {
	   rear=p;
	   front=p;
	   rear->next=front;
    }
    else
	{
		rear->next=p;
		p->next=front;
		rear=p;
		
	}
}

void cir_Queue::dequeue()
{
	if(front==rear)
	 rear=front=NULL;
	else
	{
		cout<<front->info<<" deleted"<<endl;
		if(front!=rear)
		front=front->next;
		 rear->next=front;
	}
}
void cir_Queue::display() 
{
	node *ptr;
	ptr=front;
	if(front!=NULL && rear!=NULL)
	{
	while(ptr->next!=front)
	{
		cout<<ptr->info<<"->";
		ptr=ptr->next;
	}
	cout<<ptr->info<<"->";
	cout<<front->info<<endl;
	}
	else 
	cout<<"list is empty"<<endl;
}
int main()
{
	int size;
	cout<<"size of queue"<<endl;
	cin>>size;
	cir_Queue q;
	int x,n,i=0;
	cout<<"1 for enter value in enqueue, 2 for dequeue ,3 display ,4 for change size"<<endl;
	cin>>x;
	while(x<=3)
	{  
		if(x==1)
		{   
		       
			if(i<size)
		    {
		    	for(i;i<size;i++)
		    		q.enqueue();
			}
			else
			cout<<"overflow"<<endl;
			cout<<"option"<<endl;
			cin>>x;
		}
		if(x==2)
		{   q.dequeue();
		    i--;
			cout<<"option"<<endl;
			cin>>x;

		}
		if(x==3)
		{   
		    q.display();
			cout<<"option"<<endl;
			cin>>x;

		}
		if(x==4)
		{   
			cout<<"new size add "<<endl;
			cin>>n;    
			if(i+n>=MAX)
			{
				cout<<"size is  to large"<<endl;
			}
			else
			{
				size=n+size;
				cout<<"total space  "<<size<<endl;
				cout<<"empty space "<<size-i<<endl;
				
				
			}
			
			cout<<"option"<<endl;
			cin>>x;	
		}
	}
	return 0;
}
