Task1*********************************************************************************
#include <iostream>
#include <cmath> // for sin, cos, sqrt

using namespace std;

int main() {
    double x, y, result;

    cout << "Введіть x: ";
    cin >> x;
    cout << "Введіть y: ";
    cin >> y;

    if (x <= 0) {
        result = pow(x, 2) - sin(y); 
    } else {
        result = sqrt(x) + cos(y);    
    }

    // Output the result
    cout << "Результат: " << result << endl;

    return 0;
}

Task2******************************************************************************
#include <iostream>

using namespace std;

int main() {
    double x, y;

    cout << "Введіть координату x: ";
    cin >> x;
    cout << "Введіть координату y: ";
    cin >> y;

    // Check if the point is inside the shaded area
    if (x >= 0 && x <= 2 && y >= 0 && y <= 1) {
        cout << "Точка (" << x << ", " << y << ") всередині області." << endl;
    } else {
        cout << "Точка (" << x << ", " << y << ") за межами області." << endl;
    }

    return 0;
}
