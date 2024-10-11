//Task1**********************************************************
#include <iostream>
#include <iomanip>  // для форматованого виведення
using namespace std;

// Структура для збереження годин і хвилин
struct Date {
    int hours;
    int minutes;
};

// Функція для перевірки правильності введених годин і хвилин
bool isValidTime(Date time) {
    return (time.hours >= 0 && time.hours < 24) && (time.minutes >= 0 && time.minutes < 60);
}

// Функція для додавання хвилин до часу
Date addMinutes(Date time, int addedMinutes) {
    time.minutes += addedMinutes;  // Додаємо хвилини
    time.hours += time.minutes / 60;  // Додаємо години, якщо хвилини перевищують 60
    time.minutes %= 60;  // Оновлюємо хвилини
    time.hours %= 24;  // Оновлюємо години (з врахуванням циклічності доби)
    
    return time;
}
int main() {
    Date time;
    int addedMinutes;

    // Введення початкового часу
    cout << "Введіть години: ";
    cin >> time.hours;
    cout << "Введіть хвилини: ";
    cin >> time.minutes;

    // Перевірка на коректність введеного часу
    if (!isValidTime(time)) {
        cout << "Некоректні дані часу!" << endl;
        return 1;
    }

    // Введення кількості хвилин для додавання
    cout << "Введіть кількість хвилин для додавання: ";
    cin >> addedMinutes;

    // Обчислення нового часу
    Date newTime = addMinutes(time, addedMinutes);

    // Виведення нового часу у форматі ГГ:ХХ
    cout << "Новий час: " << setw(2) << setfill('0') << newTime.hours << ":"
         << setw(2) << setfill('0') << newTime.minutes << endl;

    return 0;
}


//Task2**********************************************************
#include <iostream>
#include <iomanip>  // для форматованого виведення
using namespace std;

// Структура для збереження годин і хвилин
struct Date {
    int hours;
    int minutes;
};

// Функція для перевірки правильності введених годин і хвилин
bool isValidTime(Date time) {
    return (time.hours >= 0 && time.hours < 24) && (time.minutes >= 0 && time.minutes < 60);
}

// Функція для обчислення тривалості події
Date calculateDuration(Date start, Date end) {
    Date duration;
    
    // Перевіряємо, якщо кінцевий час менший за початковий (перехід через добу)
    if (end.minutes < start.minutes) {
        end.minutes += 60;
        end.hours -= 1;
    }
    duration.minutes = end.minutes - start.minutes;
    
    if (end.hours < start.hours) {
        end.hours += 24;
    }
    duration.hours = end.hours - start.hours;
    
    return duration;}

int main() {
    Date startTime, endTime;

    // Введення часу початку події
    cout << "Введіть час початку події (години хвилини): ";
    cin >> startTime.hours >> startTime.minutes;

    // Перевірка на коректність введеного часу початку
    if (!isValidTime(startTime)) {
        cout << "Некоректний час початку події!" << endl;
        return 1;
    }

    // Введення часу завершення події
    cout << "Введіть час завершення події (години хвилини): ";
    cin >> endTime.hours >> endTime.minutes;

    // Перевірка на коректність введеного часу завершення
    if (!isValidTime(endTime)) {
        cout << "Некоректний час завершення події!" << endl;
        return 1;
    }

    // Обчислення тривалості події
    Date duration = calculateDuration(startTime, endTime);

    // Виведення тривалості події у форматі ГГ:ХХ
    cout << "Тривалість події: " << duration.hours << ":" 
         << setw(2) << setfill('0') << duration.minutes << endl;

    return 0;
}

