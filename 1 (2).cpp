#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
int main()
{
	//Declaring Variables
	int hh1, hh2, hh, mm1, mm2, mm, ss1, ss2, ss;
	//Getting Input From  User 
	cout<<"Enter Time-1 In hh-mm-ss Format:";
	cin>>hh1>>mm1>>ss1;
	cout<<"Enter Time-2 In hh-mm-ss Format:";
	cin>>hh2>>mm2>>ss2;
	//Logic 
	ss= ss1 + ss2;
	mm = ss/60;
	ss= ss%60;
	
	mm= mm + (mm1 + mm2);
	hh=mm/60;
	mm=mm%60;
	
	hh= hh + (hh1 + hh2);
	 
	//Dispalying Output
	cout<<"Sum Of Two Time In hh-mm-ss Format is:"<<hh<<"-"<<mm<<"-"<<ss;
}
