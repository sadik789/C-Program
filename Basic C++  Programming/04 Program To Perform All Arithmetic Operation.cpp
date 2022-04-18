#include<iostream>
using namespace std;

int main()
{
	int Num1,Num2,Sum,Sub,Mult,Mod;
	float Div;
	
	cout<<"Enter First Number :";
	cin>>Num1;
	
	cout<<"Enter Second Number :";
	cin>>Num2;
	
	Sum = Num1+Num2;
	Sub = Num1-Num2;
	Mult = Num1*Num2;
	Mod = Num1%Num2;
	Div = Num1/Num2;
	
	cout<<"\n Sum Of Two Number :"<<Sum;
	cout<<"\n Substraction Of Two Number :"<<Sub;
	cout<<"\n Multiplication Of Two Number :"<<Mult;
	cout<<"\n Modulus Of Two Number :"<<Mod;
	cout<<"\n Division Of Two Number :"<<Div;
	
	return 0;
	
}
