#include<iostream>
using namespace std;

int main() {
    int n[5] = {0, 1, 2, 3, 4}; 
    int sum = 0;

    
    for(int i = 0; i < 5; ++i) {
        cout << "Enter Number : "; 
        cin >> n[i];
        sum += n[i];
    }
	cout<<"The sum of the elements in the array is "<<sum;
    
    
   
}
