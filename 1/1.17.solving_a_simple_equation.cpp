﻿#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
    // Параметры управнения:
    double a, b;

    // Логическая переменная для записи проверяемых условий:
    bool state;

    // Ввод параметров уравнения:
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "x is: ";

    // Проверка условий и поиск решения:
    state = (a != 0);
    state ? (cout<<b/a<<endl, exit(0))
          : (void)(state = (a == 0) && (b == 0));
    cout << (state ? "any number!" : "no result!") << endl;
    return 0;
}