#include <iostream>

using namespace std;


void getName( char test[],int s);


void getAge(int );
void printTicket(int );

int main()
{

	char alpha[50];
	int a;

getName(alpha,50);

getAge(a);
printTicket(a);

//return 0;
}//main

void getName(char test[],int s)
{
	cout<<"What is your name?\n";
	cin>>test[50];
}//void getname

void getAge(int x)
{
	cout<<"Enter age please \n";
	cin>>x;
	while(x>100)
	{
		cout<<"This cannot be, enter age again \n";
		cout<<"Enter age please \n";
	    cin>>x;
	}
	while(x<0)
    {
		cout<<"This cannot be, enter age again \n";
		cout<<"Enter age please \n";
	    cin>>x;
	}
    
}//void getage

void printTicket(int x)
{
    int p;
	if(x<=13)
	{
		double p=9.99;
		cout<<"Your ticket price is: "<<p<<endl;
	}
	if(13<x<65)
	{
		double p=19.99;
		cout<<"Your ticket price is: "<<p<<endl;
	}
	if(x>=65)
	{
		double p=12.99;
		cout<<"Your ticket price is: "<<p<<endl;
	}

}






