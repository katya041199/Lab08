//Задание-07 на 5
#include <math.h>
#include <iostream>
#include <stdlib.h>

using namespace std;
int main() {
    float v1, v2, a1, a2, s, sv, sa, t, s1, s2, rtop1, rtop2, price, vtop1, vtop2, price1, price2;

    cout << "Введите расстояние между автомобилями:\n";
    cin >> s;
    cout << "Введите скорости автомобилей:\n";
    cin >> v1 >> v2;
    cout << "Введите ускорения автомобилей:\n";
    cin >> a1 >> a2;
    
    cout << "Введите расход топлива на километр 1 автомобиля:\n";
    cin >> rtop1;
    cout << "Введите расход топлива на километр 2 автомобиля:\n";
    cin >> rtop2;
    cout << "Введите цену за 1 литр топлива:\n";
    cin >> price;


    sv = v1 + v2;
    sa = a1 + a2;
    t = abs((-(sv) + sqrt((sv * sv) + (sa)*2 *s)) / (sa));

    s1 = v1 * t + (a1 * (t*t)) / 2;
    s2 = v2 * t + (a2 * (t*t)) / 2;

    vtop1 = (s1*rtop1) /100;
    vtop2 = (s2*rtop2) /100;
    price1 = vtop1*price;
    price2 = vtop2*price;

    cout << "Время встречи: " << t << "\n";
    cout << "Путь первого автомобиля: " << s1 << "\n";
    cout << "Путь второго автомобиля: " << s2 << "\n";
    cout << "Объем затраченного топлива 1 автомобиля: " << vtop1 << ", цена за топливо: " << price1 << "\n";
    cout << "Объем затраченного топлива 2 автомобиля: " << vtop2 << ", цена за топливо: " << price2 << "\n";
}