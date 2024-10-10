//Task1***************************************************************************
#include <iostream>
using namespace std;

int main() {
    const int m = 4, n = 3;
    int arr[m][n];

    // Input the elements of the array
    cout << "Enter the elements of a " << m << "x" << n << " array:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    // Count even numbers in each row
    for (int i = 0; i < m; i++) {
        int evenCount = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i][j] % 2 == 0) {
                evenCount++;
            }
        }
        cout << "Row " << i + 1 << " has " << evenCount << " even numbers.\n";
    }

    return 0;
}

//Task6***************************************************************************
#include <iostream>
using namespace std;

int main() {
    const int m = 4, n = 7;
    int arr[m][n];

    // Вводимо числа у масив
    cout << "Enter the elements of a " << m << "x" << n << " array:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    // Знайдемо мін елементі його позицію
    int minVal = arr[0][0];
    int minRow = 0, minCol = 0;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i][j] < minVal) {
                minVal = arr[i][j];
                minRow = i;
                minCol = j;
            }
        }
    }

    // Output результат
    cout << "Minimum element is " << minVal << " at position (" << minRow << ", " << minCol << ").\n";

    return 0;
}

//Task15***************************************************************************
#include <iostream>
using namespace std;

int main() {
    const int m = 3, n = 3;
    int arr[m][n];
    int mainDiagonalSum = 0, secondaryDiagonalSum = 0;

    cout << "Enter the elements of a " << m << "x" << n << " array:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    // Вирахуємо суму діагоналей
    for (int i = 0; i < m; i++) {
        mainDiagonalSum += arr[i][i];                //Перша: arr[0][0], arr[1][1], arr[2][2]
        secondaryDiagonalSum += arr[i][n - i - 1];   // Друга arr[0][2], arr[1][1], arr[2][0]
    }

    // Output результат
    cout << "Sum of main diagonal: " << mainDiagonalSum << endl;
    cout << "Sum of secondary diagonal: " << secondaryDiagonalSum << endl;

    return 0;
}

