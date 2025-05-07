#include <iostream>
using namespace std;


int linearSearch(int arr[], int size, int target) {
    for(int i=0; i<size; i++) {
        if(arr[i] == target) {
            return i;  
        }
    }
    return -1;  
}

int main() {
    int numbers[] = {4, 2, 7, 1, 9, 5, 3};
    int target = 5;
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int result = linearSearch(numbers, size, target);
    if(result != -1) {
        cout << "Element found at index: " << result;
    } else {
        cout << "Element not found";
    }

}