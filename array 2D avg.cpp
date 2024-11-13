#include<iostream>
using namespace std;
int main()
{
	int rows,column;
	int sum=0;
	float avg=0;
	cout<<"enter the number of rows: ";
	cin>>rows;
	cout<<"enter the number of column: ";
	cin>>column;
	
	//Declare a 2D array;
	int arr[rows][column];
	cout<<"enter elements of the array:\n";
	for(int i=0; i<rows; i++){
	 for(int j=0; j<column; j++){
	 	cout<<"element[ "<<i<< "]["<<j<<"]";
	 	cin>>arr[i][j];
	 	
	 	 sum=sum+arr[i][j];
	 	 avg=sum/arr[i][j];
	 	 mult=mult*arr[i][j];
		  }
	    
	   	 	
	 
}
	 //display the 2D array
	 cout<<" \nthe 2D array is:\n";
	 for(int i=0; i<rows; i++){ 
	 for(int j=0; j<column; j++){
	 	cout<<arr[i][j] <<" ";
	 }
	 }
	    cout<<"\n the sum is: "<<sum;
	    cout<<"\n the avg is: "<<avg;
	    cout<<"\n the mult is: "<<mult;
 
         return 0;}
