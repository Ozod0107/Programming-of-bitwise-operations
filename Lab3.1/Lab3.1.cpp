#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    unsigned short packed_data;
    int x, y, c;
    cout << "Введите упакованную структуру данных: ";
    cin >> hex >> packed_data;
    x = (packed_data >> 10) & 0x3F;
    y = (packed_data >> 4) & 0x3F;
    c = packed_data & 0xF;
    cout << dec << "X: " << x << endl;
    cout << dec << "Y: " << y << endl;
    cout << dec << "C: " << c << endl;
    return 0;
}