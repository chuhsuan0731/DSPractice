//@TSENGCHUHSUAN 2020/12/17@

#include <iostream>
using namespace std;
struct node
{
  char data;
  struct node *left;
  struct node *right;
};

void preorder(node *p)
{
  if(p) 
  {
    cout << p->data << " ";
    preorder(p->left);
    preorder(p->right);
  }
}

void ROOT(node *p)
{
  node *root,*p1,*p2,*p4,*p5;
  p1=new node;
  p1->data='P';
  root=p1;
  p2=new node;
  p2->data='t';  
  p4=new node;
  p4->data='D';
  p5=new node;
  p5->data='E';

  p1->left=p2;
  p1->right=NULL;
  p2->left=p4;
  p2->right=p5;
  p4->left=NULL;
  p4->right=NULL;
  p5->left=NULL;
  p5->right=NULL;
  
  cout<<" ---TREE--- \n";
  preorder(root);
  cout << endl;
  cout<<"\n-----------------\n";
  cout<<"傳回TREE的根\n";
  cout <<p1->data<<endl;
}

void addChild()
{
    node *root,*p1,*p2,*p3,*p4,*p5;
    p1=new node;
    p1->data='P';
    root=p1;
    p2=new node;
    p2->data='t'; 
    p3=new node;
    p3->data='n';  
    p4=new node;
    p4->data='D';
    p5=new node;
    p5->data='E';

    p1->left=p2;
    p1->right=p3;
    p2->left=p4;
    p2->right=p5;
    p3->left=NULL;
    p3->right=NULL;
    p4->left=NULL;
    p4->right=NULL;
    p5->left=NULL;
    p5->right=NULL;
    cout<<"\n將n插入，作為P的節點\n";
    preorder(root);
    cout << endl;
}

void cut()
{
    node *root,*p1,*p2,*p3;
    p1=new node;
    p1->data='t';
    root=p1;
    p2=new node;
    p2->data='D'; 
    p3=new node;
    p3->data='E';  

    p1->left=p2;
    p1->right=p3;
    p2->left=NULL;
    p2->right=NULL;
    p3->left=NULL;
    p3->right=NULL;
    
    cout<<"\n參考原樹，建立以t為根的樹\n";
    preorder(root);
    cout << endl;
}

void paste()
{
	node *root,*p1,*p3,*p7,*p14,*p15;
        p1=new node;
        p1->data='P';
        root=p1;
        p3=new node;
        p3->data='n'; 
	p7=new node;
        p7->data='t'; 
        p14=new node;
        p14->data='D'; 
	p15=new node;  
        p15->data='E';
	
	p1->left=NULL;
	p1->right=p3;
	p3->left=NULL;
	p3->right=p7;
	p7->left=p14;
	p7->right=p15;
        p14->left=NULL;
	p14->right=NULL;
	p15->left=NULL;
	p15->right=NULL;
	
	cout<<"\n 將t接到n下 \n";
	preorder(root);
	cout << endl;
}

int main()
{
  ROOT();
  cout<<endl;
  
  addChild();
  cout << endl;
  
  cut();
  cout<<endl;
  
  paste();
  return 0;
}
