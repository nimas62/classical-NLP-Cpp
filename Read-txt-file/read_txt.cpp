// opens and reads a txt file


#include <fstream>
#include <iostream>
using namespace std;
 
int main () {
   char data[100];

   // open a file in read mode.
   ifstream textfile; 
   textfile.open("text.txt"); 
 
   cout << "Reading from the file" << endl; 
   textfile >> data; 

   // write the data at the screen.
   cout << data << endl;
   
   // again read the data from the file and display it.
   textfile >> data; 
   cout << data << endl; 

   // close the opened file.
   textfile.close();

   return 0;
}
