#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter a number between 5 and 10: ";
    cin >> num;
    while (num < 5 || num > 10) {
        cout << "Invalid input. Enter a number between 5 and 10: ";
        cin >> num;
    }
    cout << "Your input value has been accepted." << endl;
    return 0;
}