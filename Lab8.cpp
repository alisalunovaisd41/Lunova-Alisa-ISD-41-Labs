#include <iostream>
#include <algorithm> // For std::sort
#include <limits>   // For std::numeric_limits
using namespace std;

int main() {
    // Task 1*******************************************************
    const int SIZE = 12;
    int arr[SIZE] = {3, -1, 4, 1, -5, 9, 2, -6, 5, 0, -3, 8};

    // Output оригінальний масив
    cout << "Original array: ";
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // відсортувати за зростанням
    int ascending[SIZE];
    copy(arr, arr + SIZE, ascending);
    sort(ascending, ascending + SIZE);
    cout << "Sorted in ascending order: ";
    for (int i = 0; i < SIZE; i++) {
        cout << ascending[i] << " ";
    }
    cout << endl;

    // відсортувати за спаданням
    int descending[SIZE];
    copy(arr, arr + SIZE, descending);
    sort(descending, descending + SIZE, greater<int>());
    cout << "Sorted in descending order: ";
    for (int i = 0; i < SIZE; i++) {
        cout << descending[i] << " ";
    }
    cout << endl;

    // Task 2*******************************************************
    int maxElementIndex = -1;
    for (int i = 0; i < SIZE; i++) {
        if (arr[i] > 0 && (maxElementIndex == -1 || arr[i] > arr[maxElementIndex])) {
            maxElementIndex = i;
        }
    }

    //замінити всі значення до максимального на 0
    if (maxElementIndex != -1) { // якщо максимальний елемент є
        for (int i = 0; i < maxElementIndex; i++) {
            if (arr[i] < 0) {
                arr[i] = 0; // замінюємо на 0
            }
        }
    }

    // Output нового масиву
    cout << "Modified array (negatives replaced with 0 before max element): ";
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
