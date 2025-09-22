#include <iostream>
using namespace std;

int main() {
    cout << "How many liters of grain do you have?" << endl;

    float makopo;
    cin >> makopo;

    int litresNo = makopo / 20;       // Each container holds 20 liters
    float rem = fmod(makopo, 20);     // Use fmod for float remainder

    cout << "Full containers: " << litresNo << endl;
    cout << "Remaining liters: " << rem << endl;

    return 0;
}
