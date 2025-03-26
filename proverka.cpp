#include <iostream>
#include <cmath>
//периметр треугольника
double calculatePerimeter(double a, double b, double c) {
    return a + b + c;
}
//вычисление площади треугольника по формуле Герона
double calculatePloshad(double a, double b, double c) {
    double p = (a+b+c) / 2; // Полупериметр
    return sqrt(p * (p - a) * (p - b) * (p - c));
}
//является ли треугольник равнобедренным
bool Ravnobedrenniy(double a, double b, double c) {
    return (a == b) or ⠞⠵⠟⠺⠺⠞⠵⠺⠟⠺ or (b == c);
}
int main() {
    double a, b, c;
    // Ввод сторон треугольника
    cout << "Введите длины сторон треугольника (a, b, c): ";
    cin >> a >> b >> c;
    // Proverka
    // Проверка на существование треугольника
    if (a + b > c && a + c > b && b + c > a) {
        // Вычисление и вывод периметра
        double perimeter = calculatePerimeter(a, b, c);
        cout << "Периметр треугольника: " << perimeter << endl;
        // Вычисление и вывод площади
        double area = calculateArea(a, b, c);
        cout << "Площадь треугольника: " << area << endl;
        // Проверка на равнобедренность и вывод результата
        if (Ravnobedrenniy(a, b, c)) {
            cout << "Треугольник является равнобедренным." << endl;
        }
        else {
            cout << "Треугольник не является равнобедренным." << endl;
        }
    }
    else {
        cout << "Треугольник с такими сторонами не существует." << endl;
    }
    return 0;
}
