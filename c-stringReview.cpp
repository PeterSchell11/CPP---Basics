#include <cstring>   // strcpy, strcmp,strlen, strcat, strncpy
#include<iostream>// cin cout 
using namespace std;

int main()
{
	
char src[50]; //0-49
char des[50];

cout<<"\n1\n";

cout<<src<<endl; //will print nothing
cout<<des<<endl;

cout<<"\n2\n";

strcpy(src,"Boat");
strcpy(des,"Air");
cout<<src<<endl<<des<<endl;

cout<<"\n3\n";

cout<<strlen(src)<<endl; //count number of character in src array - 4
cout<<strlen(des)<<endl;

cout<<src<<endl<<des<<endl;

cout<<"\n4\n";

int answer=strcmp(src,des);

if (answer==0) cout<<"src is equal to des\n";
else if (answer<0) cout<<"src is less than des\n";
else if (answer>0) cout<<"src is greater than des\n";

cout<<"\n5\n";

strcat(src,des); //adds des string to the end of the src string
cout<<src<<endl<<des<<endl;

cout<<"\n6\n";

strncpy(src,des,2);//replaces two charcters the beginning of src wiith the first two character of des
cout<<src<<endl<<des<<endl;


}