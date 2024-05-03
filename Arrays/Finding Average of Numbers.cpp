#include<iostream>
using namespace std;

int main() {
    int n[5] = {0, 1, 2, 3, 4}; 
    int sum = 0;

    
    for(int i = 0; i < 5; ++i) {
        cout << "Enter Number " << i + 1 << ": ";
        cin >> n[i];
        sum += n[i];
    }

 
    float average = sum / 5.0; 

    cout << "Average of the numbers entered: " << average << endl;
    
    
}
