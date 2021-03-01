/******************************************************************************
Peter Schellhorn
Assignment #2 

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
	//Problem 1 ; Determining if a number is positive, negative or zero
   int x;
   cout<<"Input a number to determine if it is a positive or negative \n";
   cin>>x;
if(x>0)

	cout<<"Input number is positive\n";
else if (x<0)
	cout<<"Input number is negative\n";
else if (x==0)
	cout<<"Input number is zero; neither positive or negative\n";



  //Problem 2 ; three numbers in chronological order
int num1, num2, num3, temp;

cout<<"\nInput three numbers in an order \n";
cin>>num1>>num2>>num3;

if(num1>num2)
{
    temp = num1;
    num1=num2;
    num2=temp;
}//endif

 if(num3<=num1)
 cout<<"Smallest number is "<<num3<<"\nMiddle number is "<<num1<<
 "\nLargest number is "<<num2<<endl;
 
 else if (num3>=num1&&num3<=num2)
 cout<<"Smallest number is "<<num1<<"\nMiddle number is "<<num3<<
 "\nLargest number is "<<num2<<endl;
 
 else
 cout<<"Smallest number is "<<num1<<"\nMiddle number is "<<num2<<
 "\nLargest number is "<<num3<<endl;
 
 
 
 
//Problem 3 - Determining a right triangle
double t1, t2, t3, temp2, t11, t12, t13, t14;
cout<<"\nNow, lets assume we have the measurements to the sides of a triangle\n";
cout<<"Lets determine if the triangle is a right triangle\n";
//right triangle : 3,4,5
cout<<"Enter the length of the first side\n";
cin>>t1;
cout<<"Enter the length of the second side\n";
cin>>t2;
 cout<<"Enter the length of the third side\n";
cin>>t3;

if(t1>t2)//need t3 to be the longest side
{
    temp2 = t1;
    t1=t2;
    t2=temp;
}//endif

if(t2>t3)
{
    temp2 = t2;
    t2=t3;
    t3=temp;
}//endif

t11=t1*t1;
t12=t2*t2;
t13=t3*t3;

if(t13==t11+t12)
cout<<"The triangle is a right triangle\n";
else 
cout<<"The triangle is not a right triange\n";



//Problem 4
 int billAmount;
    double h;
    cout<<"Enter number of hours parked in short term parking to determine fee\n";
    cin>>h;
    if (h<=3)
    {
        billAmount = 5;
    cout<<"Your fee is $"<<billAmount<<endl;
    }
    else if (h>3&&h<=9)
    {billAmount=6* static_cast<int>(h+1);
    cout<<"Your fee is $"<<billAmount<<endl;
    }
    else 
    cout<<"Your fee is $60";
}


