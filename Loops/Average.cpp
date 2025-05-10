#include <iostream>
using namespace std;

int main() {
    int n, num, sum = 0;
    float average;

    cout << "Enter how many numbers you want to add: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << "Enter number " << i << ": ";
        cin >> num;
        sum += num;
    }

    average = static_cast<float>(sum) / n;

    cout << "Total Sum = " << sum << endl;
    cout << "Average = " << average << endl;

}
