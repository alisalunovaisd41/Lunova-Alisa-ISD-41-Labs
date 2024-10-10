//Task 2.6 ******************************************************************************
#include <iostream>
using namespace std;

int main() {
    int c0; // Вводимо число
    cout << "Enter a natural number: ";
    cin >> c0;

    // Перевіряємо чи число парне
    if (c0 <= 0) {
        cout << "Please enter a positive natural number." << endl;
        return 1; // Еррор повідомлення і виходимо
    }

    int steps = 0; // Рахуємо кроки

    // До моменту поки наше число стане 1
    while (c0 != 1) {
        // current c0 output 
        cout << c0 << endl;
        
        // Collatz операція 
        if (c0 % 2 == 0) { // Even
            c0 = c0 / 2;
        } else { // Odd
            c0 = 3 * c0 + 1;
        }

        steps++; // плюс 1 крок
    }

    // Output останнє число (1)
    cout << c0 << endl;

    // Output усіх кроків
    cout << "steps = " << steps << endl;

    return 0;
}

//Task 2.7 ******************************************************************************
#include <iostream>
using namespace std;

int main(void) {
    double pi4 = 0.0;
    long n;           // кількість ітерацій
    cout << "Number of iterations? ";
    cin >> n;

    // сума серій
    for (long i = 0; i < n; ++i) {
        
        // додати позитиівні до even i та негативні до odd i
        if (i % 2 == 0) {
            pi4 += 1.0 / (2.0 * i + 1.0); // Even index
        } else {
            pi4 -= 1.0 / (2.0 * i + 1.0); // Odd index
        }
    }

    // Output вирахуване число π
    cout.precision(20);
    cout << "Pi = " << (pi4 * 4.0) << endl;

    return 0;
}

//Task 2.10 ******************************************************************************
#include <iostream>
using namespace std;

int main(void) {
    int n; // Число для довжини 
    const int upperLimit = 50; // ліміт 50, не забагато

    cout << "Enter a positive integer greater than 1 (up to " << upperLimit << "): ";
    cin >> n;

    // Validate the input
    if (n <= 1) {
        cout << "Error: The number must be greater than 1." << endl;
    } else if (n > upperLimit) {
        cout << "Error: The number must not exceed " << upperLimit << "." << endl;
    } else {
        // n - 2 бо в прикладах вже рахуються кути як 2, тобто коли 3, буде 1 лінія
        cout << '+';
        for (int i = 0; i < n - 2; i++)
            cout << '-';
        cout << '+' << endl;

        for (int i = 0; i < n - 2; i++) {
            cout << '|';
            for (int j = 0; j < n; j++)
                cout << ' ';
            cout << '|' << endl;
        }

        cout << '+';
        for (int i = 0; i < n - 2; i++)
            cout << '-';
        cout << '+' << endl;
    }

    return 0;
}
