//Fibonacci_sequence.cpp
#include<iostream>
using namespace std;

int main()
{
	int last, current;
	last=0;
	current = 1;
	cout<<last<<' '<<current<<' ';

	while(current<10000){
	int fib = last + current;
	last=current;
	current=fib;
	
	cout<<fib<<' ';
}

cout<<"----------The End----------"<<endl;
}
