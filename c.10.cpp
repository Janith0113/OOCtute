#include<iostream>

using namespace std;

int main()
{
	int distance,amount;
	
	cout << "Enter the distance :" ;
	cin >> distance;
	if(distance <= 10)
	{
		amount = distance * 50;
	}
	else if(distance <= 20 )
	{
		amount = 10 * 50 + (distance - 10) * 60; 
	}
	else if(distance <= 30 )
	{
		amount = 10 * 50 + (distance - 20) * 60 + (distance - 10) * 70 ;	
	}
	else
	{
		cout << "invalied";
	}
	
	cout << "Amount is" << amount;
	return 0;
	
}