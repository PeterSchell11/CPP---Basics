/*

Peter Schellhorn

*/

#include <iostream> //cin cout
#include <string> //getline - for space beween word being input
using namespace std;

int main()
{
   
//declaration statement
    string name,major,grade,hobby;
    double area, l , w; //length and width
   
    //Assignment statement
    //name="Peter Schellhorn";cannot use with getline
   
//enter data
cout<<"Enter your name"<<endl;

getline(cin,name);

cout<<"Your name is "<<name<<endl;
//print data

 cout<<"Peter Schellhorn"<<endl;
 cout<<"Computer Programming and Informations Systems"<<endl;
 cout<<"Reading"<<endl;
 
 /*Input operation ouput
  area of a rectangle
 input is L and W
 operation is Area equals W multiplied by L
 ouput is the answer
   */
   
    cout<<"Enter length of rectangle"<<endl;
    cin>>l;
    cout<<"Enter width of rectangle"<<endl;
    cin>>w;
    area=l*w;
    cout<<"The Area is "<<area;
   
   
   
   
   
}//end of program
