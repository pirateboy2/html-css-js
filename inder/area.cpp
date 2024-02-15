#include <iostream>

using namespace std;

// Function to calculate the area of the triangle
double calculateArea(double base, double height) {
    return 0.5 * base * height;
}

int main() {
    double base, height;

    // Getting the base and height from the user
    cout << "Enter the base of the triangle: ";
    cin >> base;
    cout << "Enter the height of the triangle: ";
    cin >> height;

    // Calculating the area of the triangle
    double area = calculateArea(base, height);

    // Displaying the area of the triangle
    cout << "The area of the triangle is: " << area << endl;

    return 0;
}