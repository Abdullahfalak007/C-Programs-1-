#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	//Declaring Variables
	float radius, angleInRadian, angleInDegrees, areaOfTheSector;
	float pi = 3.141592654;
	
	//Getting Input From  User 
	cout<<"Enter Length of the Chord:";
	cin>>radius;
	cout<<"Enter Angle(In Radians) Between chords:";
	cin>>angleInRadian;
	
	//Canversion of angle from radian to degrees As 1rad × 180/p = 57.296° & Area of Sector= 1/2 RXR thetha
	angleInDegrees = (angleInRadian*180)/pi;
	areaOfTheSector = (1.0/2.0)* pow(radius,2.0) * angleInDegrees ;
	 
	//Dispalying Output
	cout<<"Angle In Degrees:"<<angleInDegrees<<endl;
	cout<<"Area Of The Sector:"<<areaOfTheSector;
}
