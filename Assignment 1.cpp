/******************************************************************************
Peter Schellhorn

Assignment 1
*******************************************************************************/
#include <iostream>
using namespace std;


int main()
{
    
    //Declaration statement
    string name, major, hobby;
    double A, C, r, pi; // Input : Area, Circumference, radius
    name="Peter Schellhorn";
    major="Computer Programming and Information Systems";
    hobby="Reading and playing board games";
    pi=3.14;
    
    
    /* Problem #1
    Print three separate line : name, major, hobby */
    
    cout<<name<<endl;
    cout<<major<<endl;
    cout<<hobby<<endl;
    
    //put both; not sure which to use
    cout<<"Peter Schellhorn" <<endl;
    cout <<"Computer Programming and Information Systems"<<endl;
    cout << "Hobby : Reading and Board Games"<<endl;
    
    //////////////////////////////////////////
    /* Problem #2
    Dynamic ; enter name major and hobbys from keyboard ; use getline
     Hint: use getline(cin,variableName) from string library to
    enter the entire sentences include the whitespace. */
    //what white space is?
    cout<<"Please enter your name"<<endl; //
    
    getline(cin,name); //input
    
    cout<<"Your name is "<<name<<endl; //output
    
    cout<<"What are you majoring in? "<<endl;
    getline (cin, major);//input ; 
    cout<<"Your major is "<<major<<endl;//output
    
    cout<<"List a few of you hobbys. "<<endl;
    getline(cin, hobby);//input
    cout<<"Your hobbys are "<<hobby<<endl;//output
    
    //////////////////////////////////////////////////
    /* Problem #3
    Calculate the area and circumference of a circle
    Dynamic ; formulas: A=3.14*r*r  ;  C=2*3.14*r  */
    cout<<"Now we will calculate the area and circumferance of a circle"<<endl;
   
    cout<<"First enter the radius of your circle"<<endl;
    cin>>r; //input
    
    //operation
    C=2*pi*r;
    A=pi*r*r;
    
    cout<<"The circumference of your circle is "<<C<<endl;//output
    cout<<"The area of you circle is "<<A<<endl;//output
    
    ///////////////////////////
    /* Problem #4
    Same as question #3 but static - no input*/
    
    cout<<"We will now calculate the circumference and area of a circle with a radius of 6456"<<endl;
    r=6456;
    C=2*pi*r;   //operation
    A=pi*r*r;    //operation
    
    cout<<"The circumference of a circle with a radius of 6456 is "<<C<<endl;
    cout<<"The area of a circle with a radius of 6456 is "<<A<<endl;//output
    
    


}

