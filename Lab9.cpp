//Task3**********************************************************************************
#include <iostream>
#include <algorithm> // For std::sort
#include <limits>   // For std::numeric_limits
using namespace std;

#include <iostream>
using namespace std;

int main() {
    const int SIZE = 10; // Величина масива
    int arr[SIZE];

    // Вводимо елементи у масив
    cout << "Enter " << SIZE << " different integers:\n";
    for (int i = 0; i < SIZE; i++) {
        cin >> arr[i];
    }

    // Знайдемо індекси найбільших найменших
    int maxIndex = 0;
    int minIndex = 0;

    for (int i = 1; i < SIZE; i++) {
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }

    // Поміняємо найбільший з найменшим елементами
    swap(arr[maxIndex], arr[minIndex]);

    // Output отриманий масив
    cout << "Array after swapping largest and smallest elements:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

//Task4**********************************************************************************
#include <iostream>
using namespace std;

int main() {
    const int SIZE = 10; // Розмір масива
    int arr[SIZE];
    int A;

    // Input the array elements
    cout << "Enter " << SIZE << " integers:\n";
    for (int i = 0; i < SIZE; i++) {
        cin >> arr[i];
    }

    // Задаємо значення А
    cout << "Enter a number A: ";
    cin >> A;

    // Рахуємо кількість елементів більших за А
    int count = 0;
    for (int i = 0; i < SIZE; i++) {
        if (arr[i] > A) {
            count++;
        }
    }

    // Output count 
    cout << "Number of elements greater than " << A << ": " << count << endl;

    return 0;
}

//Task5**********************************************************************************
#include <iostream>
using namespace std;

int main() {
    const int SIZE = 10; // Розмір масиву не негативних чисел
    int arr[SIZE];

    // Input the array elements
    cout << "Enter " << SIZE << " different integers:\n";
    for (int i = 0; i < SIZE; i++) {
        cin >> arr[i];
    }

    int first = 0;
    int second = 0; // Initialize to minimum integer value

    // Find the largest and second largest elements
    for (int i = 0; i < SIZE; i++) {
        if (arr[i] > first) {
            second = first; // Другий найбільший
            first = arr[i]; // Update largest
        } else if (arr[i] > second && arr[i] < first) {
            second = arr[i]; // Перший найбільший
        }
    }

    if (second != 0) {
        cout << "The second largest element is: " << second << endl;
    } else {
        cout << "No second largest element found." << endl;
    }

    return 0;
}

//Task6**********************************************************************************
#include <iostream>
using namespace std;

int main() {
    const int SIZE = 10; // Розмір масиву
    int arr[SIZE];

    // Введемо числа для масиву
    cout << "Enter " << SIZE << " integers:\n";
    for (int i = 0; i < SIZE; i++) {
        cin >> arr[i];
    }

    // Знайти перший нульовий елемент
    int zeroIndex = -1; 

    for (int i = 0; i < SIZE; i++) {
        if (arr[i] == 0) {
            zeroIndex = i; // Зберегти індекс нульового елементу
            break; // Вийти з for цикла
        }
    }

    // Output результат
    if (zeroIndex != -1) {
        cout << "The index of the first zero element is: " << zeroIndex << endl;
    } else {
        cout << "The array does not contain any zero elements." << endl;
    }

    return 0;
}
