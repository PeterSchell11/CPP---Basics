/*
Peter Schellhorn
BCS 120
Assignment #3
*/


#include <iostream>
using namespace std;

int main()
{

/* 
Problem 1:
Write a program that prompts the user to enter two integers. 
The program outputs how many numbers are multiples of 3 and 
how many numbers are multiples of 5 between the two integers (inclusive).
*/	
int x, y, z, a, b, temp, count;
count=0;
cout<<"Problem 1\n";
cout<<"Enter two intergers\n";
cin>>a;
cin>>b;

if (a>b)
{
	temp=a;
	a=b;
	b=temp;
}//end if

 for(x=a; x<=b; x++)
	if(x%5==0)
		count++;
	
cout<<"There are "<<count<<" multiples of 5 between "<<a<<" and "<<b<<endl;
count=0;

for(x=a; x<=b; x++)
	if(x%3==0)
	    count++;
		
cout<<"There are "<<count<<" multiples of 3 between "<<a<<" and "<<b<<endl;
count=0;

for(x=a; x<=b; x++)
	if(x%3==0||x%5==0)
	    count++;
		
cout<<"There are "<<count<<" total numbers that are multiples of 3 or 5 between "<<a<<" and "<<b<<endl;
cout<<endl;

/* 
Problem 2: 
The population of town A is less than population of town B. 
However, the population of town A is growing faster than the population of town B. 
Write a program that prompts the user to enter the population and growth rate of each town. 
The program outputs after how many years the population of town A will be greater than or
equal to the population of town B and the populations of both the towns at that time. 
(A sample input is: Population of town A =5,000, 
growth rate of town A =4%, Population of town B =8,000, growth rate of town B =2 %.)
Hint: You have to have growth rate as double and population as integer….
*/

int popA, popB, years;
double grA, grB;
cout<<"Problem 2\n";
cout<<"Assume the population of town A is less than population of town B, \n";
cout<<"But the growth rate of town A is larger than town B.\n";
cout<<"Lets calculate how many years it would take town A's population to exceed town B's.\n"<<endl;

cout<<"Lets enter the population and growth rate of towns A and B. \n";

cout<<"Enter the population of town A. \n";
cin>>popA;

cout<<"Enter the population of town B. \n";
cin>>popB;

while(popA>=popB)
{
	cout<<"Population you entered for town B is less than town A,\n";
    cout<<"Please enter new population for town B that is larger than town A. \n";
    cin>>popB;
}

cout<<"Enter the growth rate of town A as a whole number. \n";
cin>>grA;

cout<<"Enter the growth rate for town B as a whole number. \n";
cin>>grB;

while(grA<=grB)
{
	cout<<"Growth rate you entered for town B is greater than town A,\n";
    cout<<"Please enter new growth rate for town B that is smaller than town A. \n";
    cin>>popB;
}

grA=grA/100;
grB=grB/100;
years=0;
while(popA<=popB)
{ 
    popA=popA*grA+popA;
    popB=popB*grB+popB;
    years++;
}

cout<<"It would take "<<years<<" years for town A's population to exceed town B's\n"<<endl;

/*
Problem 3: 
(Apartment problem)  A real estate office handles , say, 50 apartment units. 
When the rent is, say, $600 per month, all the units are occupied. 
However, for each, say $40 increase in rent, one unit becomes vacant. 
Moreover, each occupied unit requires an average of $27 per month for maintenance.
How many units should be rented to maximize the profit?
Write a program that prompts the user to enter:
	a.	The total number of units. 
	b.	The rent to occupy all the units.
	c.	The increase in rent that results in a vacant unit. 
	d.	Amount to maintain rented unit.
The program then outputs the number of units to be rented to maximize the profit. 
*/

cout<<"Problem 3\n";
cout<<"Assume you own a number of apartment units.\n";//total
cout<<"Lets calculate the maximum profit in regards to the following:\n";//maxprof
cout<<"Rent when all units are occupied.\n"; //rent
cout<<"Vacant units per rent increase.\nUpkeep of each occupied unit.\n"<<endl;//inc / upkeep

int total, maxprof=0, prof=1;
double rent, inc1=0, inc2, upkeep, Tupkeep; 

cout<<"Input total number of units owned.\n";
cin>>total;

cout<<"Input rent when all units are occupied.\n";
cin>>rent;

cout<<"Input rent increase per vacant unit.\n";
cin>>inc2;

cout<<"Input total cost of upkeep per occupied unit.\n";
cin>>upkeep;

while(maxprof<prof)
{
	maxprof=prof;
	rent=rent+inc1;
	inc1=inc2;
	prof=total*rent;
	Tupkeep=total*upkeep;
	prof=prof-Tupkeep;
	total--;

}//end while
total=total+2;//for some reason correct answer is output plus two
 cout<<"To maximize profit you would need to rent a total of "<<total<<" apartments"<<endl;

}//end main















