#include<iostream>
#define MAX 10000
using namespace std;

struct Node
{
  int data;
  struct Node *left;        
  struct Node *right;      
};

void insert(Node *p,int d)
{
  Node *next=new Node;     
  next->left=NULL;
  next->right=NULL;
  next->data=d;
  if (p->data > d) p->left=next;
  else p->right=next;   
}

Node * search(Node *p,int d)
{
  Node *q;
  while(p!=NULL)
  {
    q=p;
    if (p->data > d) p=p->left;
    else p=p->right;               
  }     
  return q;   
}

void preorder(Node *p)
{
  if (p != NULL)
  {
    cout << p->data <<" ";     
    preorder(p->left);
    preorder(p->right);
  }   
}

void inorder(Node *p)
{
  if(p != NULL) 
  {
    inorder(p->left);
    cout << p->data << " ";
    inorder(p->right);
  }
}
void postorder(Node *p)
{
  if(p != NULL) 
  {
    postorder(p->left);
    postorder(p->right);
    cout << p->data << " ";
  }
}

void levelorder(Node *p)
{
    cout  << p->data <<" ";
    if (p->left!=NULL) 
    {
      levelorder(p->left);
    }
	  if (p->right!=NULL)
	  {
	    levelorder(p->right);
    } 
}

int main()
{
  int n,v;
  Node *iNode;
  cout<<"請輸入要輸入幾個數字(ex:7) : ";
  while (cin >> n)
  {
  	cout<<"請輸入以下其中一列\n"
  	  <<"{1, 2, 3, 4, 5, 6, 7, }\n"
  	  <<"{7, 6, 5, 4, 3, 2, 1, }\n"
  	  <<"{4, 6, 5, 2, 7, 1, 3, }\n"
	  <<"====TREE===="<<endl;
    cin >> v;
    Node *root=new Node;
    root->left=NULL;
    root->right=NULL;
    root->data=v;    
    for(int i=1;i<n;i++)
	{
      cin >> v;
      iNode=search(root,v);             
      insert(iNode,v);                                      
    }
    cout<<"前序: ";  
    preorder(root);
    cout<<endl;
    cout<<"中序: ";  
    inorder(root);
    cout<<endl;
    cout<<"後序: ";  
    postorder(root);
    cout<<endl;  
    cout<<"階層走訪: ";  
    levelorder(root);
    cout<<endl;
    
	  system("pause");
    return 0;   
  }
  
}
