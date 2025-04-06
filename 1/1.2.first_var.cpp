#include <iostream>
using namespace std;
int main() {
  int age;                                      // переменная для записи возраста
  cout << "How old are you?\n";                 // сколько тебе лет?
  cin >> age;                                   // нужно указать возраст
  cout << "You are " << age << " years old\n";  // результат
  return 0;
}