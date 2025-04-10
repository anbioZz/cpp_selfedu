#include <iostream>
using namespace std;

int main() {
    int n = 13;
    int m = 5;

    // Целочисленное деление: результат – целая часть от деления
    int resultInt = n / m;
    
    // Деление с явным приведением типа для получения вещественного результата
    double resultDouble = (double) n / m;

    cout << "Результат целочисленного деления: " << resultInt << endl;
    cout << "Результат деления с приведением типа: " << resultDouble << endl;

    return 0;
}