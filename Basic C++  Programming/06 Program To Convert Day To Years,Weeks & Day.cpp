#include<iostream>
using namespace std;

int main()
{
	int Days,Weeks,Years;
	
	cout<<"Enter Days :";
	cin>> Days;
	
	Years = (Days/365);
	Weeks = (Days%365);
	Days = Days-((Years*365)+(Weeks*7));
	
	cout<<"\n Years"<<Years;
	cout<<"\n Weeks"<<Weeks;
	cout<<"\n Days"<<Days;
	
	return 0;
}
