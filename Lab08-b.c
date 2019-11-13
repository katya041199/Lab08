//Задание-07 на 4
#include <math.h>
#include <iostream>
#include <stdlib.h>

using namespace std;
int main() {
    float v1, v2, a1, a2, s, sv, sa, t, s1, s2;

    cout << "Введите расстояние между автомобилями:\n";
    cin >> s;
    cout << "Введите скорости автомобилей:\n";
    cin >> v1 >> v2;
    cout << "Введите ускорения автомобилей:\n";
    cin >> a1 >> a2;
    
    


    sv = v1 + v2;
    sa = a1 + a2;
    t = abs((-(sv) + sqrt((sv * sv) + (sa)*2 *s)) / (sa));

    s1 = v1 * t + (a1 * (t*t)) / 2;
    s2 = v2 * t + (a2 * (t*t)) / 2;

    cout << "Время встречи: " << t << "\n";
    cout << "Путь первого автомобиля: " << s1 << "\n";
    cout << "Путь второго автомобиля: " << s2 << "\n";
}