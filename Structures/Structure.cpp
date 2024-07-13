#include<iostream>
using namespace std;
struct customers{
	char name[50];
	int id;
	float salary;
	double total;
}m;
int main(){ 
	int n;
	cout<<"Enter Name : ";
	cin>>m.name;
	cout<<"Enter ID : ";
	cin>>m.id;
	cout<<"Enter Salary : ";
	cin>>m.salary;
	m.total = m.salary + m.salary;
	cout<<m.total;

}

