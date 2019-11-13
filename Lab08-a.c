//Задание-07 на 3
#include <math.h>
#include <iostream>
#include <stdlib.h>

using namespace std;
int main() {
    float v1, v2, a1, a2, s, sv, sa, t;

    cout << "Введите расстояние между автомобилями:\n";
    cin >> s;
    cout << "Введите скорости автомобилей:\n";
    cin >> v1 >> v2;
    cout << "Введите ускорения автомобилей:\n";
    cin >> a1 >> a2;
    
    sv = v1 + v2;
    sa = a1 + a2;
    t = abs((-(sv) + sqrt((sv * sv) + (sa)*2 *s)) / (sa));

    cout << "Время встречи: " << t << "\n";
}