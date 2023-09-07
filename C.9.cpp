#include <iostream>

using namespace std;

int main()
{
	int mark1,mark2,max,min;
	cout << "enter marks of two students" << endl;
	cout << "Enter the mark1 : \n" << mark1;
	cout << "Enter the mark2 : \n" << mark2;
	
	
	if( mark1 > max )
	{
		cout << "maximum mark is : \n",mark1 ;	
	}
	else
	{
		cout << "maximum mark is : \n",mark2 ;
	}
	if( mark1 < min )
	{
		cout << "minimum mark is : \n",mark1 ;
	}
	else
	{ 
		cout << "minimum mark is : \n",mark2 ;
	}
return 0;

	
}