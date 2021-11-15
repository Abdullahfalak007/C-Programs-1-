#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	//Declaring Variables
	char character, nextCharacter, furtherNextCharacter;
	
	//Getting Input From  User 
	cout<<"Enter any Character:";
	cin>> character;
	
	//Logic and Displaying Output
	
	character++;
	nextCharacter= character;
	cout<<"Next Character:"<<nextCharacter<<endl;
	
	character++;
	furtherNextCharacter= character;
	cout<<"Further Next Character:"<<furtherNextCharacter;
	
}
