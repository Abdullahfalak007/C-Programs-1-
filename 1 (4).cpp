#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	//Declaring Variables
	int a, number, firstDigit, secondDigit, thirdDigit, forthDigit, fifthDigit, sum;
	//Getting Input From  User 
	cout<<"Enter Any five-digit Number:";
	cin>>number;
	//Logic to seperate its digit
    firstDigit = number/10000;
    number= number%10000;
    secondDigit= number/1000;
    number=number%1000;
    thirdDigit= number/100;
    number=number%100;
    forthDigit= number/10;
    number= number%10;
    fifthDigit= number/1;
    
    //Logic to Sum its seperated digits
	sum= firstDigit + secondDigit + thirdDigit + forthDigit + fifthDigit; 
	
	//Displaying Output
	cout<<"Sum Of its Digits:"<<sum;
	
}
