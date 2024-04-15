//Create a function that converts Celsius to Fahrenheit.

#include <iostream>
using namespace std;

float fah(int &a){
	int b = (9.0/5.0) * a + 32; 
	return b;
}

int main(){
	int celsius;
	cout<<"Enter temprature in celsius : ";
	cin>>celsius;
	int result = fah(celsius);
	cout<<"The temprature from celsius to fahrenheit is :"<<result;
}
