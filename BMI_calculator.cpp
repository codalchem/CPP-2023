//BMI_calculator.cpp
#include<iostream>
using namespace std;

int main()
{
	cout<<"BMI CALCULATOR"<<endl;
	double BMI, w, h;

	cout<<"Enter weight in pounds";
	cin>>w;

	cout<<"Enter height in inches";
	cin>>h;

	BMI = (w*703)/(h*h);
//BMI=weigth in pounds*703/heigth in inches*height in inches.......

	cout<<"BMI = "<<BMI;

	cout<<"\n\nBMI VALUES:"<<endl;
	cout<<"Underweight: less than 18.5"<<endl;
	cout<<"Normal     : between 18.5 and 24.9"<<endl;
	cout<<"Overweight : between 25 and 29.9"<<endl;
	cout<<"Obese      : 30 or greater"<<endl;
}
