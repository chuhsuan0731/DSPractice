//TSENGCHUHSUAN 10/28
//題目:利用一維靜態陣列去實作一個已知大小的二維陣列,
//     1.get(i, j): 傳回二維陣列第 i 列，第 j 行的元素值,
//     2.set(i, j, v): 設定二維陣列第 i 列，第 j 行的元素值為 v,
//     3.輔助函數 dump() 將陣列內容印出，方便除錯

#include <iostream>
using namespace std; 

void dump()
{
int i = 5;
int j = 6;
int m,n,v;
int ARRAY[30];
    
void get(int i,int j)
{
    	ARRAY[m*j+i];
}
	
set(int i,int j,int v)
{
	ARRAY[m*j+i]=v;
}
int ARRAY[30] = 
{
	{1, 2, 3,4, 5, 6},
        {7,8,9,10,11,12},                
	{13,14,15,16,17,18},                 
	{19,20,21,22,23,24},
	{25,26,27,28,29,30}
 };		
for(int m = 0; m < 5; m++)
{
	for(int n = 0; n < 6; n++)
	{
		ARRAY[m*n] = (m + 1) * (n+ 1);
	}
} 
for(int m = 0; m < 5; m++)
{
	for(int n = 0; n < 6; n++)
	{
		cout << ARRAY[m*n] << "\t";
	}
	cout << endl;
	}
return 0;	
}
