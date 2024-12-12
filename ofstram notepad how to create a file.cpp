#include<iostream>
#include<fstream>
using namespace std;
int main()
{
		
	//Creating a file
	ofstream File("newfile.txt");
	
	File<<"Hello my name is alia";
	
	File.close();

	string Text;
	//Reading data from the file
	ifstream readFile("newfile.txt");
	
	while(getline (readFile,Text)){
		cout<<Text;
	}
	readFile.close();
}
