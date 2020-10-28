//TSENGCHUHSUAN 2020/10/28
//題目:利用一維靜態陣列去實作一個已知大小的二維陣列,
//     1.get(i, j): 傳回二維陣列第 i 列，第 j 行的元素值,
//     2.set(i, j, v): 設定二維陣列第 i 列，第 j 行的元素值為 v,
//     3.輔助函數 dump() 將陣列內容印出，方便除錯
#include <iostream>
#define ROWS 3
#define LEN 4
using namespace std;

int main()
{
    int ARRAY[ROWS*LEN]={
                            1,3,5,7,
                            9,11,13,15,
                            17,19,21,23
                        };
    int v;
  
    cout<<"傳回二維陣列第 i 列，第 j 行的元素值\n";
    for(int i = 0; i <3; i++)
    {
	    for(int j = 0; j < 4; j++)
	    {
		    cout<<"  get("<<i<<")("<<j<<")="<<ARRAY[j+i*4]<<'\t';
	    }
	    cout<<endl;
    }
	
    cout<<"設定二維陣列第 i 列，第 j 行的元素值為 v\n";	
    for(int i = 0; i <3; i++)
    {
	    for(int j = 0; j < 4; j++)
	    {
		    v=ARRAY[j+i*4];
		    cout<<"  set("<<i<<")("<<j<<")"<<"("<<v<<")"<<'\t';
	    }
	    cout<<endl;
    }
	
    cout<<"將陣列內容印出，方便除錯\n";
    for(int i = 0; i <3; i++)
    {
	    for(int j = 0; j < 4; j++)
	    { 
		    cout<<ARRAY[j+i*4]<<'\t'; 
	    }
	    cout<<endl;
    }
	
    return 0;
} 
