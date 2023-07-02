//2.31.cpp: Car Pool Savings Calculator
#include<iostream>
using namespace std;

int main()
{
	int totalMiles; //Total miles driven per day
	int costPerGallon; //Cost per Gallon of Gasoline
	int averageMiles; //Average Miles per Gallon
	int parkingFees; //Parking Fees per Day
	int tolls; //Tolls per Day
	cout<<"\n***********Car-Pool Savings Calculator***********\n";
	cout<<"--------------------------------------------------\n";
	cout<<"\nPlease enter Total Miles driven per day: ";
	cin>>totalMiles;
	cout<<"Please enter cost per Gallon of Gasoline: ";
	cin>>costPerGallon;
	cout<<"Please eneter Average Miles per Gallon of Gasoline: ";
	cin>>averageMiles;
	cout<<"Please enter Parking Fees per Day: ";
	cin>>parkingFees;
	cout<<"Please enter Tolls per day: ";
	cin>>tolls;
	int cost = (totalMiles / averageMiles)*costPerGallon + parkingFees+tolls;
	cout<<"\n\n***********User's Cost Per Day of Driven to Work********\n";
	cout<<cost;
	cout<<endl;
}
