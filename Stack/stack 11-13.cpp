#include <iostream>
using namespace std;

class Stack
{
	private:
		int *data;
		int top_; //(1)int main時要印出來頂端元素 
		
	public:
		Stack(int size); //Constructor 
		~Stack();   //(3)清空堆疊內容
		
		int top(); //查看頂端資料
		int pop(); //將頂端資料取出
		int peep(int i);//(2)偷看堆疊第i個元素 
		
		bool isEmpty(); //(4)判斷是否為空 ,If STACK=0 ,傳回TRUE 
		bool full(int size); //滿溢 
		
		void push(int key); //DATA放入堆疊 
		
}; 

Stack::Stack(int size)
{
	data = new int[size];
	top_=0;
	cout<<"產生一個大小為"<<size<<"的物件\n"; 
}

Stack::~Stack()
{
	cout<<"\n結果 : TRUE (堆疊已經為空) "; 
}

bool Stack::isEmpty(void)
{
	return (top_ < 0)? true:false;
}

bool Stack::full(int size)
{
	return (top_ >= size-1)? true:false;
}

void Stack::push(int key)
{
	data[++top_] = key;
}

Stack::peep(int i)
{
	return i;
} 

Stack::top()
{
	return data[top_];
}

Stack::pop()
{
	int temp;
	temp=data[top_];
	top_--;
	return temp;
}

int main()
{
	int i=0,S=15;
	int a[15]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14};
	
	Stack stack(S);
	
	cout<<"--資料放入stack(後進先出)--\n";
	cout<<"依序放入";
	while(i<13 && !stack.full(S)) 
	{
		cout<< i <<",";
		stack.push(a[i]);
		i++; 
	}	
	cout<<endl;
    cout<<"\n印出第五層值 : "<<stack.peep(a[8]) ;
    cout<<endl;
	cout<<"最頂端的值為 : "<<stack.top();
	cout<<endl;
	
	i=0;
	cout<<"\n----取出資料----\n";
	if(!stack.isEmpty())
		cout<<"將"<<i++<<"到"<<stack.pop()<<"取出\n"; 
			
}
