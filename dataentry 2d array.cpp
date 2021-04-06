#include<iostream>

using namespace std;


int main()
{
int a[2][2];

readData(a,2,2);

for(int i=0;i<=1;i++){//rows
	for(int j=0;j<=1;j++)//columns
	{
		cout<<"enter the value at index" <<i<<" "<<j<<" ";
		cin>>a[i][j]
	}
}// for 
   ///////////////////////////////////////////////////////////////////////
   for (int i=0;i<=1;i++){  // for rows 
       
       for (int j=0;j<=1;j++)  // columns 
       cout<<a[i][j]<<"  ";
   }// for 


}