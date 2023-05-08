//using_cast_operator.cpp
#include<iostream>
using namespace std;

int main()
{
	cout<<"\nCast operator to evaluate the integer equivalent of character\n";
	char x;
	cout<<"\nEnter any character";
	cin>>x;
	cout<<"\nThe int value of char "<<x<<" is "<<static_cast<int>(x);
	cout<<endl;
}
