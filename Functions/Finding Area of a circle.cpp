//Implement a function to calculate the area of a circle given its radius.

#include <iostream>
using namespace std;

float rad(int r){
	const float pi = 3.14;
	int cal = pi*r*r;
	cout<<"The area of a circle given radius is "<<cal;
	return cal;
}

int main(){
	float radius;
	cout<<"Enter radius : ";
	cin>>radius;
	rad(radius);
}
