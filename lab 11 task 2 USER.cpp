#include<iostream>
using namespace std;

    struct User {
    string name;  // Variable to store the username
};

int main() {
    // Create a User object to hold the username
    User user;

    cout << "Enter your username: ";
    cin >> user.name;  

    string validUsername = "admin"; 

    if (user.name == validUsername) {
       
        cout << "Welcome, " << user.name << "!" << endl;
    } else
	 {
        
        cout << "Invalid username. Please try again." << endl;
    }

    return 0;
}

