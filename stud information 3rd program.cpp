#include<iostream>
#include<string>
using namespace std;

struct StudentGrading {
    string name;        
    string sapID;       
    string address;     
    string department;  
    float marks1;      
    float marks2;       

    float calculateMaxMarks() {
        return (marks1 > marks2) ? marks1 : marks2;  
    }
    
    void displayStudent() {
        cout << "\nStudent Information: " << endl;
        cout << "Name: " << name << endl;
        cout << "SAP ID: " << sapID << endl;
        cout << "Address: " << address << endl;
        cout << "Department: " << department << endl;
        cout << "Marks in Subject 1: " << marks1 << endl;
        cout << "Marks in Subject 2: " << marks2 << endl;
        cout << "Maximum Marks: " << calculateMaxMarks() << endl;
    }
};

int main() {
    StudentGrading students[5]; 

   
    for(int i = 0; i < 5; i++) {
        cout << "\nEnter details for Student " << i + 1 << ":\n";

        cout << "Enter name: ";
        cin.ignore();  
        getline(cin, students[i].name);

        cout << "Enter SAP ID: ";
        cin >> students[i].sapID;

        cout << "Enter address: ";
        cin.ignore(); 
        getline(cin, students[i].address);

        cout << "Enter department: ";
        getline(cin, students[i].department);

        cout << "Enter marks for Subject 1: ";
        cin >> students[i].marks1;

        cout << "Enter marks for Subject 2: ";
        cin >> students[i].marks2;

        // Display student details after input
        students[i].displayStudent();
    }

    return 0;
}

