#include <algorithm>
using namespace std;

int main() {
    int n[5] = {0, 1, 2, 3, 4}; 

    // Sort the array in ascending order
    sort(n, n + 5);

    cout << "Sorting array in ascending order: ";
    for(int i = 0; i < 5; ++i) {
        cout << n[i] << " ";
    }
    cout << endl;
   
}
