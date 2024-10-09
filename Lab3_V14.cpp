Task1************************************************
#include <iostream>

using namespace std;

int main() {
    int N;
    int hundreds, tens, units;
    int product = 1;  // Починати множення з 1
    bool hasEven = false; 

    // Введіть номер
    cout << "Enter a three-digit positive number: ";
    
    // Перевірити чи номер має три цифри
    while (true) {
        cin >> N;
        
        // Check if input is valid and between 100 and 999
        if (N >= 100 && N <= 999) {
            break;  // Valid input, exit loop
        } else {
            cout << "Error: Please enter a valid three-digit positive number: ";
            cin.clear(); // Clear error flag
            cin.ignore(10000, '\n'); // Discard invalid input
        }
    }

    // Витягнути цифри по одній
    hundreds = N / 100;           // Get the hundreds digit
    tens = (N / 10) % 10;         // Get the tens digit
    units = N % 10;               // Get the units digit

    // Check and multiply even digits
    if (hundreds % 2 == 0) {
        product *= hundreds;
        hasEven = true;
    }
    if (tens % 2 == 0) {
        product *= tens;
        hasEven = true;
    }
    if (units % 2 == 0) {
        product *= units;
        hasEven = true;
    }

    // Результат
    if (hasEven) {
        cout << "Добуток парних цифр: " << product << endl;
    } else {
        cout << "Немає парних цифр і цьому числі." << endl;
    }

    return 0;
}

Task2****************************************************************
#include <iostream>
using namespace std;

int main() {
    int day;
    
    cout << "Введіть номер дня тижня (1 - понеділок, 7 - неділя): ";
    cin >> day;

    switch(day) {
        case 1:
            cout << "Понеділок: \n1. Математика\n2. Фізика\n3. Історія\n";
            break;
        case 2:
            cout << "Вівторок: \n1. Програмування\n2. Фізкультура\n3. Література\n";
            break;
        case 3:
            cout << "Середа: \n1. Хімія\n2. Математика\n3. Біологія\n";
            break;
        case 4:
            cout << "Четвер: \n1. Англійська мова\n2. Географія\n3. Фізика\n";
            break;
        case 5:
            cout << "П'ятниця: \n1. Інформатика\n2. Математика\n3. Історія\n";
            break;
        case 6:
            cout << "Субота: \n1. Вільний день\n";
            break;
        case 7:
            cout << "Неділя: \n1. Вихідний день\n";
            break;
        default:
            cout << "Невірний номер дня тижня. Введіть число від 1 до 7.\n";
            break;
    }
    
    return 0;
}
#include <iostream>
#include <cmath> // для функції sqrt
using namespace std;

int main() {
    double x, y;
    
    cout << "Введіть координати точки (x, y): ";
    cin >> x >> y;

    // Перевірка, чи точка належить трикутнику
    bool inTriangle = (x >= 0 && y >= 0 && x + y <= 1);

    // Перевірка, чи точка належить чверті кола
    bool inQuarterCircle = (x <= 0 && y <= 0 && (sqrt(x * x + y * y) <= 1));

    // Виводимо результат
    if (inTriangle) {
        cout << "Точка (" << x << ", " << y << ") знаходиться всередині трикутника." << endl;
    } else if (inQuarterCircle) {
        cout << "Точка (" << x << ", " << y << ") знаходиться всередині чверті кола." << endl;
    } else {
        cout << "Точка (" << x << ", " << y << ") не належить жодній із заштрихованих областей." << endl;
    }

    return 0;
}

