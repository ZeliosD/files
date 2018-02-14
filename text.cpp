#include <iostream>
#include <fstream>
using namespace std;


int main( )
{
   //create some data
   short int a = -6730;
   float b = 68.123; 
   char c = 'J';
 
   ofstream myFile {"abc.txt"};
   if(myFile) {
	myFile<<a<<" "<<b<<" "<<c;
   }
   else 
	cout << "Error opening file"<<endl;
   myFile.close();
   //cout<<a<<" "<<b<<" "<<c;//display data to console (i.e. as formatted chars)

   cout<<endl<<endl;
 
   return 0;
}
