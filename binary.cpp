#include <iostream>
#include <fstream>
using namespace std;

int main( )
{
   //create some data
   short int a = -6730;
   float b = 68.123; 
   char c = 'J';
 
   ofstream myFile{"abc.bin", ios::binary};
   if(myFile) {
	myFile.write(reinterpret_cast<char*>(&a), sizeof(a));
	myFile.write(reinterpret_cast<char*>(&b), sizeof(b));
	myFile.write(reinterpret_cast<char*>(&c), sizeof(c));
   }
   else 
	cout << "Error opening file"<<endl;
   myFile.close();

   cout<<endl<<endl;
 
   return 0;
}
