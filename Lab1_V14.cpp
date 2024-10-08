#include <iostream>
#include <cmath> // for sin, cos, log, M_PI

using namespace std;

int main() {
    double a, b, y;

    a = 2;
    b = 19,03;

    // Check for division by zero
    if (a == 0 || b == 0) {
        cout << "Error" << endl;
        return 1; // Exit the program
    }

    // Calculate the value of the function
    double term1 = 4.3 * sin((a / b + 1) * M_PI);
    double term2 = (b / a) * (1 - cos((a / b - 1) * M_PI));
    y = term1 / term2 + log(b);

    // Output the result
    cout << "Результат: " << y << endl;

    return 0;
}
