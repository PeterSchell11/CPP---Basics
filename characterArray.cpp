

#include<cstring>
#include<iostream>

using namespace std;
void testStract(char[], char[]);
void ConvertUpper(char[]);
void testStrcmp(char[],char[]);

int main()
{
	//int x[2]={2,8};
	//for (int i=0,i<=1,i++)

string s1="new";
string s2="york"
string result=s1+s2;
cout<<result<<endl<<endl<<endl<<endl;


char src[50]; //declaring array
char des[50];

strcpy(src, "this is bcs10");

strncpy (des, src, 5);
cout<<"before strcat "<<endl;

cout<<src<<endl;
cout<<des<<endl;

cout<<"length src = "<<strlen(src)<<endl;
cout<<"length des = "<<strlen(des)<<endl;

strcat(des,src);// src string is added to the end of string des

cout<<strlen(src)<<endl;
cout<<strlen(des)<<endl;

cout<<src<<endl;
cout<<des<<endl;

char a1[20];
char a2[20];
strcpy(a1,"Air");
strcpy(a2,"Boat");
int answer=strcmp(a1,a2);//strcmp compares ascii values of two arrays 
cout<<answer<<endl<<endl;//results should be 1,0,or-1
}

/* void  testStrcmp(char arr1[] ,char arr2 [])
{
    int answer;
   
    answer=strcmp(arr1,arr2);
    if (answer==0  )    cout<<"arr1 is equal to arr2"<<endl;
    else if  (answer==-1)    cout<<"arr1 is less than arr2"<<endl;
    else if (answer==1)  cout <<"arr1 is greater arr2"<<endl;
   
   
    
}*/








/*[5:07 PM] Amani Ayad
    
#include <cstring>   // strcpy, strcmp,strlen, strcat, strncpy
#include<iostream>// cin cout 


using namespace std;


int main () {
    
    char  src[50];
    char des[50];
    
    strcpy(src,"this is bcs120 ");
    
    
    strncpy(des,src,5);
    
    cout<<src<<endl;
    cout<<des<<endl;
}// main 
  //////////////////////////////////////////
    
int main () {
    
    char  src[50];
   
    char des[50];
    
    strcpy(src,"this is bcs120 ");
    
    
    strncpy(des,src,5);
    cout<<"before strcat  "<<endl;
    cout<<"src="<<src<<endl;
    cout<<"des="<<des<<endl;
    
     cout<<"length src ="<<strlen(src)<<endl;
     cout<<"length des= "<<strlen(des)<<endl;
    


     strcat(des,src);
    
    cout<<"length src ="<<strlen(src)<<endl;
     cout<<"length des= "<<strlen(des)<<endl;
     
   cout<<"src="<<src<<endl;
    cout<<"des="<<des<<endl;
    
}
*/
