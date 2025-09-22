#include <iostream>
using namespace std;

int main() {
    int numberOfCattle;
    
    cout << "==========================================" << endl;
    cout << "   	 KHOMO TSA BOHALI 		   " << endl;
    cout << "==========================================" << endl;
    
    cout << "Enter the number of cattle: ";
    cin >> numberOfCattle;
    
    // Input validation
    if (numberOfCattle < 0) {
        cout << "Error: Number of cattle cannot be negative." << endl;
        return 1;
    }
    
    cout << "\nClassification Result:" << endl;
    cout << "----------------------" << endl;
    
    if (numberOfCattle == 0) {
        cout << "No cattle owned." << endl;
    }
    else if (numberOfCattle < 10) {
        cout << "Status: Not enough for bohali" << endl;
        
    }
    else if (numberOfCattle <= 50) {
        cout << "Status: Small herd" << endl;
        
    }
    else {
        cout << "Status: Wealthy cattle owner" << endl;
        
    }
    
    cout << "Number of cattle: " << numberOfCattle << endl;
    
    return 0;
}