#include<iostream>
using namespace std;
struct node
{
	node *pre;
	int data;
	node *next;
};
struct doubly_LL
{
	node *head;
	doubly_LL()
	{
		head=NULL;
	}
  node *createnode(int);
  void insertbeg();
  void display();
  void insertend();
  void insertaf();
  void insertbf();
  void del_given();
  void search();
};
node *doubly_LL::createnode(int x)
{
	node *temp=new node;
	temp->pre=NULL;
	temp->data=x;
	temp->next=NULL;
	return temp;
	
}
void doubly_LL::insertbeg()
{
	int ele;
	node *p;
	cin>>ele;
	p=createnode(ele);
	if(head==NULL)
	{
		head=p;
	}
	else
	{
		p->next=head;
		head->pre=p;
		head=p;
	}
}
void doubly_LL::display()
{  node *ptr;
	if(head==NULL)
	cout<<"LL is empty"<<endl;
	ptr=head;
	while(ptr!=NULL)
	{
		cout<<ptr->data<<"<->";
		ptr=ptr->next;
	}
}
void doubly_LL::insertend()
{
	node *ptr,*p;
	int ele;
	cout<<"enter data"<<endl;
	cin>>ele;
	p=createnode(ele);
	if(head==NULL)
	{
		head=p;
	}
	ptr=head;
	while(ptr->next!=NULL)
	{
		ptr=ptr->next;
	}
	ptr->next=p;
	p->pre=ptr;
}
void doubly_LL::insertaf()
{
	node *ptr,*p,*ptr2;
	int ele,x;
	cout<<"enter data"<<endl;
	cin>>ele;
	cout<<"after node"<<endl;
	cin>>x;
	p=createnode(ele);
	if(head==NULL)
	{
		head=p;
	}
	ptr=head;
	if(head!=NULL)
	{
	
	while(ptr->data!=x)
	{
		ptr=ptr->next;
	}
	if(ptr->next!=NULL)
  {
    ptr2=ptr->next;
	ptr->next=p;
	p->pre=ptr;
	p->next=ptr2;
	ptr2->pre=p;
   }
   if(ptr->next==NULL)
   {
   	ptr->next=p;
	p->pre=ptr;
   }
   }  
}
void doubly_LL::del_given()
{
	node *ptr;
	cout<<"given node"<<endl;
	int x;
	cin>>x;
	if(head==NULL)
	cout<<"NO element present"<<endl;
	ptr=head->next;
	if(head!=NULL)
	{  
	    
		while(ptr!=NULL)
		{  
				if(ptr->data==x && ptr->next!=NULL)
			{
				ptr->next->pre=ptr->pre;
				ptr->pre->next=ptr->next;
				
				delete ptr;
				break;
			}
			if(ptr->data==x && ptr->next==NULL)
			{  
				ptr->pre->next=NULL;
				break;	
			}
			
			ptr=ptr->next;
			
		}
		if(head->data==x)
				{
				head=head->next;
				head->pre=NULL;
				}
		
	}
	
     	
   
}
void doubly_LL::insertbf()
{
	node *ptr,*p,*ptr2;
	int ele,x;
	cout<<"enter data"<<endl;
	cin>>ele;
	cout<<"before node"<<endl;
	cin>>x;
	p=createnode(ele);
	if(head==NULL)
	{
		head=p;
	}
	ptr=head;
	if(head!=NULL)
	{
	 if(head->data!=x)
	{
	ptr2=ptr;
	ptr=ptr->next;
	while(ptr->data!=x)
	{   ptr2=ptr;
		ptr=ptr->next;
	}
	ptr2->next=p;
	p->pre=ptr2;
	p->next=ptr;
	ptr->pre=p;
   
  
    }
	if(head->data==x)
	  {
	  	p->next=head;
	  	head->pre=p;
	  	head=p;
	  }
}
}

void doubly_LL::search()
{
	node *ptr;
	ptr=head;
	int flag=0;
	int x;
	cout<<"enter data to be search"<<endl;
	cin>>x;
	while(ptr!=NULL)
	{
		if(ptr->data==x)
		{
			flag=1;
			break;
		}
		ptr=ptr->next;
	}
	if(flag==0)
	cout<<"data not found"<<endl;
	else
	cout<<"data found"<<endl;
}

int main()
{   doubly_LL l1;
	int n;
	int exit;

	
		cout<<"Enter 1 for insert element at beg"<<endl;
        cout<<"Enter 2 for insert at end"<<endl;
        cout<<" Enter 3 for display"<<endl;
        cout<<"Enter 4 for insert after"<<endl;
        cout<<"Enter 5 for exit"<<endl;
        cout<<"Enter 6 for insert before"<<endl;
        cout<<"Enter 7 for delete a node"<<endl;
        cout<<"Enter 8 for search an element"<<endl;
        	cin>>exit;
	while(exit!=5)
	{
	if(exit==1)
	{
	cout<<"total element"<<endl;
	cin>>n;
	cout<<"enter element"<<endl;
	for(int i=0;i<n;i++)
	{
		l1.insertbeg();
	}
		cout<<"enter choice"<<endl;
	cin>>exit;
   } 
   if(exit==2)
   {
   	l1.insertend();
   		cout<<"enter choice"<<endl;
	cin>>exit;
	}  
	if(exit==3)
	{
	l1.display();
	cout<<"enter choice"<<endl;
	cin>>exit;
    }
	if(exit==4)
	{
		l1.insertaf();
		cout<<"enter choice"<<endl;
	cin>>exit;
	}
	if(exit==6)
	{
		l1.insertbf();
		cout<<"enter choice"<<endl;
	cin>>exit;
	}
		if(exit==7)
	{
		l1.del_given();
		cout<<"enter choice"<<endl;
	cin>>exit;      
    }
    	if(exit==8)
	{
		l1.search();
		cout<<"enter choice"<<endl;
	cin>>exit;      
    }
		if(exit>8)
	{

		cout<<"enter choice"<<endl;
	cin>>exit;      
    }
}
}
