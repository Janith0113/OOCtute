#include<iostream>

using namespace std;

int main()
{
	int n,count,total;
	count = 0;
	total = 0;
	
	cout << "Enter the n value:";
	cin >> n;
	while(count <= n)
	{
		total = total + count;
		count++;
	}
	cout << "Total value is : " << total;	
	return 0;
}