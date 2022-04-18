#include<iostream>
using namespace std;

int main()
{
	int Num1,Num2,Temp;
	
	cout<<"Enter First Number:";
	cin>>Num1;
	
	cout<<"Enter Second Number:";
	cin>>Num2;
	
	Temp = Num1;
	Num1 = Num2;
	Num2 = Temp;
	
	cout<<"After Swapping Values\n";
			
	cout<<"Enter First Number:\n"<<Num1;
	cout<<"Enter Second Number:\n"<<Num2;
	
	return 0;
	
	
}
