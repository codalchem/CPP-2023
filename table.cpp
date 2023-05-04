//table.cpp
#include<iostream>
using namespace std;

int main()
{
	cout<<"Enter number for table: ";
	int number;
	cin>>number;
	
	cout<<"Enter number for table length: ";
	int n;
	cin>>n;

	for(int i=1; i<=n; i++)
{
	cout<<i<<" X "<<number<<" = "<< i*number;
	cout<<endl;
}

cout<<endl;
return 0;
}
