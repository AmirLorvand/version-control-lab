#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

    float number1;
    float number2;
    cout << "Enter two numbers: ";
    cin >> number1;
    cin >> number2;

    cout << "The sum: " << number1 + number2 << "\n";
    cout << "The difference: " << number1 - number2 << "\n";
    cout << "The product: " << number1 * number2 << "\n";
    cout << "The distance: " << abs(number1 - number2) << "\n";
    cout << "The mean average: " << (number1 + number2) / 2 << "\n";

    return 0;
    
}