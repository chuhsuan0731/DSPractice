//TSENGCHUHSUAN 10/28

#include <iostream>
using namespace std; 

int main()
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
		
	for(int m = 0; m < i; m++)
	{
		for(int n = 0; n < j; n++)
		{
			ARRAY[m*n] = (m + 1) * (n+ 1);
		}
	} 
	for(int m = 0; m < i; m++)
	{
		for(int n = 0; n < j; n++)
		{
			cout << ARRAY[m*n] << "\t";
		}
		cout << endl;
	}
	return 0;	
}
