#include <iostream>
using namespace std;

int main() {
    int n[5] = {0, 1, 2, 3, 4}; 
    int target = 3; 
    bool found = false;

    
    for(int i = 0; i < 5; ++i) {
        if (n[i] == target) {
            found = true; 
            break; 
        }
    }

    if (found) {
        cout << target << " is present in the array." << endl;
    } else {
        cout << target << " is not present in the array." << endl;
    }
    
   
}
