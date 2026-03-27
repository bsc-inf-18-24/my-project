#include <iostream>
using namespace std;
double triangle(double base, double height) {
    return 0.5 * base * height;
}
double rectangle(double length, double width) {
    return length * width;
}
double square(double side) {
    return side * side;
}
int main() {
    int choice;
    while (true) {
        cout << "\n1. Triangle\n2. Rectangle\n3. Square\n4. Exit\n";
        cout << "Choose shape: ";
        cin >> choice;
        if (choice == 4) break;
        if (choice == 1) {
            double b, h;
            cout << "Enter base and height: ";
            cin >> b >> h;
            cout << "Area = " << triangle(b, h) << endl;
        }
        else if (choice == 2) {
            double l, w;
            cout << "Enter length and width: ";
            cin >> l >> w;
            cout << "Area = " << rectangle(l, w) << endl;
        }
        else if (choice == 3) {
            double s;
            cout << "Enter side: ";
            cin >> s;
            cout << "Area = " << square(s) << endl;
        }
        else {
            cout << "Invalid choice. Try again.\n";
        }
    }
    return 0;
}