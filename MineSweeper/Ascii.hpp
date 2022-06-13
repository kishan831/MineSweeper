#include<iostream>
#include<fstream>
#include<string>

using namespace std;

void display() {
  
}
void printAscii(string fileName)
{
  string line = "";
  ifstream infile;
  infile.open(fileName);
  if(infile.is_open())
  {
    while(getline(infile, line))
    {
      cout << line << endl;
    }
  }
  infile.close(); 
}