//Write a C++ function to find the maximum of two numbers.

#include<iostream>
using namespace std;

int max_two_num(int a , int b){
	if(a>b){
		cout<<a<<" is maximum";
	}
	else{
			cout<<b<<" is maximum";
	}
}





int main(){
	int x , y;
	cout<<"Enter Number 1 : ";
	cin>>x;
	cout<<"Enter Number 2 : ";
	cin>>y;
	int numbers=max_two_num( x , y);

	
}
