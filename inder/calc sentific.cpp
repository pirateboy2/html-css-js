#include<iostream>
#include<cmath>
using namespace std;

// Function to calculate area of triangle
double calculateArea(double a, double b, double c) {
    double s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

int main() {
    double a, b, c;

    cout << "Enter the length of side a: ";
    cin >> a;

    cout << "Enter the length of side b: ";
    cin >> b;

    cout << "Enter the length of side c: ";
    cin >> c;

    double area = calculateArea(a, b, c);
    cout << "The area of the triangle is: " << area << endl;

    return 0;
}
