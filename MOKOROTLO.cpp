#include <iostream>
using namespace std;

void Mokorotlo(int n) {
    for (int i = 1; i <= n; i++) {
        for (int space = 1; space <= n - i; space++) {
            cout << " ";
        }
        for (int star = 1; star <= (2 * i - 1); star++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int height;
    
        cout << "\nEnter the height of the triangle : ";
        cin >> height;
        
        if (height <= 0) {
            cout << "Invalid input! Height must be positive." << endl;
                
        }
        
    
        Mokorotlo(height);
        
        return 0;
}