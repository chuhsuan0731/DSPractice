#include <iostream>
using std::cout;
using std::endl;

class LinkedList;    // 為了將class LinkedList設成class ListNode的friend,
                     // 需要先宣告
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
	  LinkedList list;     
    list.Push_back(1);   
    list.Push_back(3);
	  list.Push_back(4);   
    list.Push_front(9);   
    list.Push_front(9); 
    list.Push_front(8);  
    list.PrintList(); 
    
	  cout<<"反轉後\n" ;  
    list.Reverse();     //反轉 
    list.PrintList();   
}

void L ()
{
	LinkedList list;      
    list.Push_back(9);   
    list.Push_back(7);   
    list.Push_back(5);  
    list.Push_back(4);   
    list.Push_back(1);
    list.PrintList(); 
}

void M ()
{
	  LinkedList list;   
    list.Push_front(2);
    list.Push_front(3);
	  list.Push_front(6);        
    list.PrintList(); 
}

void merge()   //串列相加 
{
	  LinkedList list;      
    list.Push_back(4);   
    list.Push_back(5);   
    list.Push_back(6);  
    list.Push_back(7);   
    list.Push_back(9);
    list.Push_front(3);
    list.Push_front(2);
	  list.Push_front(1);
	  list.PrintList(); 
}




int main() 
{
	cout<<"---LINKED LIST---　\n";
	reverse();
	cout<<endl;
	
	cout<<"L: ";
	L();
	cout<<"M: ";
	M() ; 
	cout<<"  ---合併後---　\n";
	cout<<"L: ";
	merge();
	cout<<"M: ";
	M();
	
  return 0;
}
