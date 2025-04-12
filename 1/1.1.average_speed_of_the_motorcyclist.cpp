#include <iostream>
using namespace std;
int main() {
    // Параметры задачи
    double S1, S2, t1, t2, V;
    
    // Ввод параметров
    cout<<"Enter the value of S1 = ";
    cin>>S1;
    cout<<"Enter the value of S2 = ";
    cin>>S2;
    cout<<"Enter the value of t1 = ";
    cin>>t1;
    cout<<"Enter the value of t2 = ";
    cin>>t2;
    V = (S1 + S2) / (t1 + t2);
    cout<<"Average speed = "<<V<<"\n";
    return 0;
}