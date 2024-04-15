//Write a function to calculate the area of a rectangle given its length and width.


#include<iostream>
using namespace std; 
float area_of_rect(int a , int b){
	return a*b;
}

int main(){
	float len,hgt ;
	cout<<"Enter lenght : ";
	cin>>len;
	cout<<"Enter height : ";
	cin>>hgt;
	cout<<"The Area of  Rectangle of lenght "<<len<<" and height "<<hgt<<" is "<<area_of_rect(len,hgt);
}
