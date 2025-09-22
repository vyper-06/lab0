#include <iostream>
#include <string>
using namespace std;

int main() {
    int dayNumber;
    
    cout << "==================================================" << endl;
    cout << "           MATSATSI A BEKE         " << endl;
    cout << "==================================================" << endl;
    
    cout << "1 - Mantaha " << endl;
    cout << "2 - Labobedi " << endl;
    cout << "3 - Laboraro " << endl;
    cout << "4 - Labone " << endl;
    cout << "5 - Labohlano " << endl;
    cout << "6 - Moqebelo " << endl;
    cout << "7 - Sontaha " << endl;
    cout << "==================================================" << endl;
    
    cout << "\nEnter a number (1-7): ";
    cin >> dayNumber;
    
    if (dayNumber < 1 || dayNumber > 7) {
        cout << "\n? Error: " << dayNumber << " is invalid!" << endl;
        cout << "Please enter a number between 1 and 7." << endl;
        return 1;
    }
    
    string sesothoName, englishName;
    
    switch(dayNumber) {
        case 1:
            sesothoName = "Mantaha";
            
            break;
        case 2:
            sesothoName = "Labobedi";
            
            break;
        case 3:
            sesothoName = "Laboraro";
            
            break;
        case 4:
            sesothoName = "Labone";
            
            break;
        case 5:
            sesothoName = "Labohlano";
            
            break;
        case 6:
            sesothoName = "Moqebelo";
            
            break;
        case 7:
            sesothoName = "Sontaha";
            
            break;
    }
    
    
    cout << "==================================================" << endl;
    cout << "Number: " << dayNumber << endl;
    cout << "Sesotho: " << sesothoName << endl;
    cout << "English: " << englishName << endl;
    cout << "==================================================" << endl;
    
    return 0;
}