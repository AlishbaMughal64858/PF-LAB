#include<iostream>
using namespace std;

struct book {
char name[20];
char author[40];
double numberofpages;
double yearofpublication;

};
int main()
{
	book b1[5];
	for(int i=0; i<5; i++){
	
	
	cout<<"\nEnter the details of books: "<<i+1<<":\n";
	
	cout<<"Enter the book name: ";
	cin.getline(b1[i].name,20);
	
	cout<<"Enter the author name: ";
	cin>>b1[i].author,40;
	
	cout<<"Enter the number of pages: ";
	cin>>b1[i].numberofpages;
	
	cout<<"Enter the year of publication: ";
	cin>>b1[i].yearofpublication;
	
	
	//clear the input buffer
	cin.ignore();
}
for( int i=0; i<5; i++)
{
	cout<<"/n details of books"<<endl;
	cout<<"BOOK NAME: "<<b1[i].name <<endl;
	cout<<"AUTHOR NAME: "<<b1[i].author <<endl;
	cout<<"NUMBER OF PAGES: "<<b1[i].numberofpages <<endl;
	cout<<"YEAR OF PUBLICATION: "<<b1[i].yearofpublication <<endl;
	
}
 return 0;
}
