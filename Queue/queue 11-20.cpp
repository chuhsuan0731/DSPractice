#include <iostream>
using namespace std;

class Queue{
	private:
		int *data;
		int front;
		int back;
	public:
		Queue(int size);
		~Queue(); //(3)清空 
		
		int head();//(1)查看前端元素 
		int tail();//(2)查看尾端元素
		int peep(int i);//(3)偷看第i個元素 
		
		int enqueue();//取出 
		bool isEmpty();//(5)判斷是否為空 ,If Queue=0 ,傳回TRUE
		bool full(int size);//是否滿溢 
		
		void dequeue(int key);//放入 
};

Queue::Queue(int size)
{
	data=new int[size];
	front=0;
	back=-1;
	cout<<"產生一個大小為"<<size<<"的物件\n"; 
}

Queue::~Queue()
{
	cout<<"\n結果 : TRUE(佇列為空)\n";
}

bool Queue::isEmpty(void)
{
	return (front > back)? true:false;
}

bool Queue::full(int size)
{
	return (back >= size-1)? true:false;
}

void Queue::dequeue(int key)
{
	data[++back] = key;
}

int Queue::head()
{
	return data[front];
}

int Queue::peep(int i)
{
	return data[i]-1;
}

int Queue::tail()
{
	return data[back];
}

int Queue::enqueue()
{
	return data[front++];
}


int main() 
{
	int i=0,S=15;
	int a[15]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14};
	
	Queue queue(S);
	
	cout<<"----資料放入queue(先進先出)----\n";
	cout<<"依序放入  ";
	while(i<13&&!queue.full(S))
	{
		cout<<i<<",";
		queue.dequeue(a[i]);
		i++; 
	}
	
	cout<<"\n最前端值為:"<<queue.head();
	cout<<"\n第八個值為:"<<queue.peep(a[8]);
	cout<<"\n最尾端值為:"<<queue.tail()<<endl; 
	
	system ("pause");
	i=0;
	cout<<"\n---取出資料:---\n";
	cout<<"依序取出  ";
	while(!queue.isEmpty())
		cout<<queue.enqueue()<<"," ;
		cout<<endl;
	system ("pause");
	return 0;
		
}
