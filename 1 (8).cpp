#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	//Declaring Variables
	float pound, kg;
	
	//Getting Input From  User 
	cout<<"Enter the Mass in Pound:";
	cin>>pound;
	
	//Calculating
	kg = pound/2.20462;
	
	//Dispalying Output
	cout<<"Mass in Kilograms:"<<kg<<"kg";
}
