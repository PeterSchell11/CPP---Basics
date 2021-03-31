
#include <iostream>
using namespace std;


int main()
{
    // declaration statment
    double a; //input
    double b; // output
    double c; //input q2
    
    /*question 1 :write a program that inputs a variable "a" and output value "b".
    include comments ; use formula b=a*a ; use static and dynamic */
    //static
    //assignment statement
    a=45;
    //operation
    b=a*a;
    // output
    cout<<"Forty five squared is "<< b<<endl;
    
    /////////////////////////////////
//question1 dynamic
    
    //enter data 
    cout<<"\nEnter a number"<<endl;
    cin>>a;
     //operation
     b=a*a;
     //output
     cout<<"Your number squared is "<<b<<endl;
    
    ////////////////////////////////////////
    /*question 2 : write a program to calculate the area of a triangle. 
    user input base and height of triangle. formula is Area = 1/2*base*height
    dynamic*/
    
cout<<"\nNow we will find the area of a triangle "<<endl;
cout<<"Enter the height of the triangle "<<endl;
cin>>a;//input
cout<<"Enter the base of the triangle "<<endl;
cin>>c;//input
b=(a*c)/2;//operation
cout<<"The area of your triangle is "<<b;//output
    
}

