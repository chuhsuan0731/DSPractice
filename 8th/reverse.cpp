#include <iostream>
using namespace std;
  
class ListNode
{
private:
    int data;
    ListNode *next;
public:
    ListNode():data(0),next(0){};
    ListNode(int a):data(a),next(0){};

    friend class LinkedList;
};

class LinkedList
{
private:
    ListNode *first;            
public:
    LinkedList():first(0){};
    void PrintList();           
    void Push_front(int x);     
    void Push_back(int x);      
    void Reverse(); 
    void Merge(); 
};


void LinkedList::PrintList()   //空串列 
{
    if (first == 0) {                     
        cout << "!!!空空串列!!!.\n";
        return;
    }
    ListNode *current = first;             
    while (current != 0) {                 
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}


void LinkedList::Push_front(int x)  //從開頭加入 
{
    ListNode *newNode = new ListNode(x);  
    newNode->next = first;                 
    first = newNode;                       
}


void LinkedList::Push_back(int x)  //從尾端加入 
{
    ListNode *newNode = new ListNode(x);  

    if (first == 0) {                     
        first = newNode;
        return;
    }

    ListNode *current = first;
    while (current->next != 0) {           
        current = current->next;
    }
    current->next = newNode;               
}

void LinkedList::Reverse()  //反轉 
{
    if (first == 0 || first->next == 0) 
	{
        return;
    }

    ListNode *previous = 0,
             *current = first,
             *preceding = first->next;

    while (preceding != 0) {
        current->next = previous;      
        previous = current;           
        current = preceding;           
        preceding = preceding->next;   
    }                                  
    current->next = previous;          
    first = current;                   
}

void reverse()
{
	cout<<"原式 : \n";
    LinkedList list;     
    list.Push_back(1);   
    list.Push_back(3);
    list.Push_back(4);   
    list.Push_front(9);   
    list.Push_front(9); 
    list.Push_front(8);  
    list.PrintList(); 
    
    cout<<"反轉後 : \n" ;  
    list.Reverse();     //反轉 
    list.PrintList();   
}

int main() 
{
	cout<<"---LINKED LIST---　\n";
	reverse();
	cout<<endl;
	system ("pause");
        return 0;
}
