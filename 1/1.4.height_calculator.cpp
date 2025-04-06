#include <iostream>
using namespace std;
int main() {
  // скорость тела -- объявление переменной
  double v;

  // время полёта
  double t=1.2;

  // ускорение свободного падения
  double g=9.8;

  // скорость -- инициализация перемнной
  v=12.3;

  // высота -- динамическая инициализация переменной
  double s=v*t-g*t*t/2;
  cout<<"Height level is "<<s<<"\n";
  return 0;
}