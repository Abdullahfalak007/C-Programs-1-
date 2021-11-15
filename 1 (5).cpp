#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	//Declaring Variables
	float p, t, i , compoundInterest;
	//Getting Input From  User 
	cout<<"Enter Principal ammount:";
	cin>>p;
	cout<<"Enter Rate Of Interest:";
	cin>>i;
	cout<<"Enter Time Period:";
	cin>>t;
	
	//Calculating
	compoundInterest= p*(pow(1+i/100),t) -p ;
	//Dispalying Output
	cout<<"Compound Interest:"<<compoundInterest;
}
