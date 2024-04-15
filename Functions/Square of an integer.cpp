//Create a function that takes an integer as input and returns its square.

#include <iostream>
using namespace std;

int sq_num(int &a ){

	int	b = a*a;
	return b;
	
}



int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    
    int square = sq_num(num);
    cout << "Square of " << num << " is: " << square << endl;
}

	
