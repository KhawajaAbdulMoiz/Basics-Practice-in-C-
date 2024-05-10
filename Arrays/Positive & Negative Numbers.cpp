#include<iostream>
using namespace std;

void func(int array[10]){
    for(int i = 0 ; i < 10 ; i++){
        if(array[i] > 0){
            cout << "Positive Number : " << array[i] << endl;
        }
        else if(array[i] < 0){
            cout << "Negative Number : " << array[i] << endl;
        }
        else{
            cout << "Zero : " << array[i] << endl;
        }
    }
}

int main(){
    int array[10];
    for(int i = 0 ; i < 10 ; i++){
        cout << "Enter Number : ";
        cin >> array[i];
    }
    func(array);
    return 0;
}

