//odd-even.cpp
#include<iostream>
using namespace std;

int main()
{
	//Enter two integers to check whether odd even
	int num1, num2;
	cout<<"Enter the integers to check: ";
	cin>>num1>>num2;

	if(num1%2==0){
	cout<<num1<<" is even";}
	else{
	cout<<num1<<" is not even";}
	cout<<endl;
	if(num2%2==0){
	cout<<num2<<" is even";}
	else{
	cout<<num2<<" is odd";}

	if((num1+num2)%2 == 0){
	cout<<"\nThe sum of "<<num1<<" and "<<num2<<" is even";}
	else{
	cout<<"\nThe sum of "<<num1<<" and "<<num2<<" is odd";}

	cout<<endl;
}
