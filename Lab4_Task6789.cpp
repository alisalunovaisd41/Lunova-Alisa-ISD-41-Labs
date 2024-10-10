//Task6**************************************************
#include <iostream>
using namespace std;

int main(void) {
    bool answer;
    int value;
    cout << "Введіть число: ";
    cin >> value;

    // Нам треба значення, яке:
    answer = (value >= 0 && value < 10) ||
             (value * 2 < 20 && value - 2 > -2) ||
             (value - 1 > 1 && value / 2 < 10) ||
             (value == 111);

    // Output the result
    cout << (answer ? "THAT'S TRUE :)" : "THAT'S NOT TRUE :(") << endl;

    return 0;
}

//Task7**************************************************
#include <iostream>
#include <iomanip> // For setting precision
using namespace std;

int main() {
    // ініціалізація значень
    double var1, var2, var3, var4, var5;

    // Ввести значення
    cin >> var1;
    cin >> var2;
    cin >> var3;
    cin >> var4;
    cin >> var5;

    cout << var1 << endl;                               // 2.3 (не треба форматування)
    cout << fixed << setprecision(2) << var2 << endl;   // 2.30 (2 децимальних місця)
    cout << fixed << setprecision(6) << var3 << endl;   // 2.123456 (6 децимальних місць)
    cout << fixed << setprecision(2) << var4 << endl;   // 2.12 (знову 2)
    cout << fixed << setprecision(0) << var5 << endl;   // 2 (знову 0)

    return 0;
}
//Task8**************************************************
#include <iostream>
#include <cmath> // For the abs function
using namespace std;

int main() {
    int num1, num2;
    const double epsilon = 0.000001;
    
    // Вводимо два числа
    cout << "Enter the first integer: ";
    cin >> num1;
    cout << "Enter the second integer: ";
    cin >> num2;

    // Переводимо у float і ділимо
    float result1 = 1.0 / num1;
    float result2 = 1.0 / num2;

    // Порівнюємо результат та епсілон
    if (fabs(result1 - result2) < epsilon) {
        cout << "Results are equal (by 0.000001 epsilon)" << endl;
    } else {
        cout << "Results are not equal (by 0.000001 epsilon)" << endl;
    }

    return 0;
}
//Task9**************************************************
#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3, num4;

    // Вводимо 4 числа
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Enter the third number: ";
    cin >> num3;
    cout << "Enter the fourth number: ";
    cin >> num4;

    // Чи числа в області (1 до 255)
    if ((num1 >= 1 && num1 <= 255) && 
        (num2 >= 1 && num2 <= 255) && 
        (num3 >= 1 && num3 <= 255) && 
        (num4 >= 1 && num4 <= 255)) {

        // Робимо правильнй вигляд IP адреси
        cout << num1 << "." << num2 << "." << num3 << "." << num4 << endl;

    } else {
        // Еррор повідомлення
        cout << "Invalid input. All numbers must be in the range of 1 to 255." << endl;
    }

    return 0;
}
