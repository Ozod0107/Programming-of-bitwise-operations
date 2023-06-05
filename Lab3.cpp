#include <iostream>
using namespace std;

int main() 
{
    setlocale(LC_ALL, "RU");
    unsigned short int x, y, c;
    unsigned short packed_data = 0;
    while (true) 
    {
        cout << "Введите значения: X- ";
        cin >> x;
        if ( x > 63 || cin.fail() || cin.get() != '\n')
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Ошибка: введено некорректное значение! Повторите ввод.\n";
        }
        else
            break;
    }
    while (true)
    {
        cout << "                  Y- ";
        cin >> y;
        if (y > 63 || cin.fail() || cin.get() != '\n')
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Ошибка: введено некорректное значение! Повторите ввод.\n";
        }
        else
            break;
    }
    while (true)
    {
        cout << "                  C- ";
        cin >> c;
        if (c > 15 || cin.fail() || cin.get() != '\n')
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Ошибка: введено некорректное значение! Повторите ввод.\n";
        }
        else
            break;
    }

    // Установка переменной packed_data
    packed_data |= x << 10;
    packed_data |= y << 4;
    packed_data |= c;

    // Вывод значения переменной packed_data в шестнадцатеричном формате с использованием заглавных букв
    cout << "Значение переменной packed_data: " << hex << uppercase << packed_data << endl;

    return 0;
}


// Задание №1
int countLessC = 0;
for (int i = 0; i < n; i++) {
    if (arr[i] < c) {
        countLessC++;
    }
}
cout << "Количество элементов массива, меньших C: " << countLessC << endl;

// Задание №2
int sumIntPart = 0;
bool foundNegative = false;
for (int i = n - 1; i >= 0; i--) {
    if (arr[i] < 0) {
        foundNegative = true;
        break;
    }
    sumIntPart += static_cast<int>(arr[i]);
}
if (foundNegative) {
    cout << "Сумма целых частей элементов массива, расположенных после последнего отрицательного элемента: " << sumIntPart << endl;
}
else {
    cout << "В массиве нет отрицательных элементов." << endl;
}

// Задание №3
double maxElem = arr[0];
for (int i = 1; i < n; i++) {
    if (arr[i] > maxElem) {
        maxElem = arr[i];
    }
}
int countMaxElem = 0;
for (int i = 0; i < n; i++) {
    if (abs(arr[i] - maxElem) <= maxElem * 0.2) {
        countMaxElem++;
    }
}
double tempArr[MAX_SIZE];
int indexMax = 0, indexOther = countMaxElem;
for (int i = 0; i < n; i++) {
    if (abs(arr[i] - maxElem) <= maxElem * 0.2) {
        tempArr[indexMax] = arr[i];
        indexMax++;
    }
    else {
        tempArr[indexOther] = arr[i];
        indexOther++;
    }
}
for (int i = 0; i < n; i++) {
    arr[i] = tempArr[i];
}