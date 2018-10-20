/*
Write a menu driven program that implements the following operations on a   
Binary search tree :
"	Insert a new element 
"	Delete an existing element
"	Traversing the tree
o	Pre-order Traversal
o	In-order Traversal 
o	Post-order Traversal

*/
#include<iostream>
using namespace std;
struct node
{
	int key;
	struct node *left;
	struct node *right;	
};
struct node *root=NULL;
struct node * minValueNode(struct node* node) 
{ 
    struct node* current = node; 
    while (current->left != NULL) 
        current = current->left; 
  
    return current; 
}
node *createnode(int data)
{
	node *temp=new node;
	temp->key=data;
	temp->left=NULL;
	temp->right=NULL;
	return temp;
}
node *insert(node *ptr,int data)
{
if(ptr==NULL)
	{
		ptr=createnode(data);
		return ptr;
	}
	else if (data<=ptr->key) 
	{
        ptr->left=insert(ptr->left, data);
    } 
	else 
	{
        ptr->right=insert(ptr->right,data);
    }
    
}
void inorder(node *ptr)
{
	if(ptr==NULL)
	{
		return;
	}
	inorder(ptr->left);
	cout<<ptr->key<<"   ";
	inorder(ptr->right);
}
void preorder(node *ptr)
{
	if(ptr==NULL)
	{
		return;
	}
	cout<<ptr->key<<"   ";
	inorder(ptr->left);
	inorder(ptr->right);
	
}
void postorder(node *ptr)
{
	if(ptr==NULL)
	{
		return;
	}
	inorder(ptr->left);
	inorder(ptr->right);
	cout<<ptr->key<<"   ";
}
node *delete_root(node *root,int data)
{
	
    if (root == NULL) 
	{
		cout<<"root not found"<<endl;
		return root; 
	}
    
	if (data < root->key) 
        {	
        	root->left = delete_root(root->left, data); 
     
		}
    else if (data > root->key) 
        {	 
        	
        	root->right = delete_root(root->right, data);
	
		}
  
    else
    {    
    	
        if (root->left == NULL) 
        { 
            struct node *temp = root->right;
		
            free(root); 
            return temp; 
        } 
        else if (root->right == NULL) 
        { 
            struct node *temp = root->left;
		
            free(root); 
            return temp; 
        } 
        else
        {
        	struct node* temp = minValueNode(root->right); 
  		
        root->key = temp->key; 
        root->right = delete_root(root->right, temp->key); 
		}
    } 
    return root; 
}

int main()
{	
	int size,data,opt,tra;
	
	cout<<"enter 1 for insertion into BST"<<endl;
	cout<<"enter 2 for deletion from BST"<<endl;
	cout<<"enter 3 for traversing"<<endl;
	cin>>opt;
	while(opt<=3)
	{
		 
	if(opt==1)
	{	
		cout<<"enter data"<<endl;
		cin>>data;
		if(root==NULL)
		root=createnode(data);
		else
		insert(root,data);
		cout<<endl<<"---------------------------------"<<endl;
		cout<<"enter 1 for insertion into BST"<<endl;
		cout<<"enter 2 for deletion from BST"<<endl;
		cout<<"enter 3 for traversing"<<endl;
		cin>>opt;
	}
	if(opt==2)
	{
		cout<<"data to delete"<<endl;
		cin>>data;
		delete_root(root,data);
		cout<<endl<<"---------------------------------"<<endl;
		cout<<"enter 1 for insertion into BST"<<endl;
		cout<<"enter 2 for deletion from BST"<<endl;
		cout<<"enter 3 for traversing"<<endl;
		cin>>opt;
    }
    
    if(opt==3)
    {
    cout<<"1 for inorder , 2 for preorder , 3 for postorder"<<endl;
	cin>>tra;
	if(tra==1)
	{
		cout<<"inorder tree"<<endl;
		inorder(root);
		cout<<endl;
	}
	if(tra==2)
	{
		cout<<"preorder tree"<<endl;
		preorder(root);
		cout<<endl;
	}
	
	if(tra==3)
	{
		cout<<"postorder tree"<<endl;
		postorder(root);
		cout<<endl;
	}
	if(tra>3)
	{
		cout<<"out off range"<<endl;
	}
	
		cout<<endl<<"---------------------------------"<<endl;
		cout<<"enter 1 for insertion into BST"<<endl;
		cout<<"enter 2 for deletion from BST"<<endl;
		cout<<"enter 3 for traversing"<<endl;
		cin>>opt;
	
	}
	
	}
}

