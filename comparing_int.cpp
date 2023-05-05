//comparing_int.cpp
#include<iostream>
using namespace std;

int main()
{
	int x, y;
	cout<<"\nEnter two integer values: ";
	cin>>x>>y;

	if(x>y){
	cout<<x<<" is larger";}

	if(y>x){
	cout<<y<<" is larger";}

	if(x==y){
	cout<<"These Numbers are equal.";}
	cout<<endl;
}
