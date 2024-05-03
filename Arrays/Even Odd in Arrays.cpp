#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5; 
    int numbers[SIZE];

    
    cout << "Enter " << SIZE << " numbers: ";
    for (int i = 0; i < SIZE; ++i) {
        cin >> numbers[i];
    }

    
    cout << "Even/Odd Results:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        if (numbers[i] % 2 == 0) {
            cout << numbers[i] << " is even." << endl;
        } else {
            cout << numbers[i] << " is odd." << endl;
        }
    }

}
