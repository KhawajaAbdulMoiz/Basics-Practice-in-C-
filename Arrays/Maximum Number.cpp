#include <iostream>
using namespace std;

int main() {
    int n[5] = {0, 1, 2, 3, 4}; 
    int max_element = n[0]; 


    for(int i = 1; i < 5; ++i) { 
    	cin>>n[i];
        if (n[i] > max_element) {
            max_element = n[i]; 
        }
    }

    cout << "Maximum element in the array: " << max_element << endl;
    
    return 0;
}
