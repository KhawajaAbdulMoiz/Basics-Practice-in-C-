//Develop a function to check if a given year is a leap year.
#include<iostream>
using namespace std;

void year(int &a){
		if(a%4==0){
			if(a%100==0){
				if(a%400==0){
					 cout << "Leap Year";

					
				}
				else{
					cout<<"Not Leap Year";

				}
				
			}
			else{
				cout<<"Leap Year";

			}				
}
else{
	cout<<"Not Leap Year";
}
}
	
	
int main(){
	int Year;1
	cout<<"Input year :";
	cin>>Year;
	year(Year);
}


