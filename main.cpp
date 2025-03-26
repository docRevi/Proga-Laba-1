#include <iostream>
#include <locale>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;

float Perimeter(float a, float b) {
    return 2 * (a + b);
}

float Area(float a, float b) {
    return a * b;
}

float Diagonal(float a, float b) {
    return sqrt(a * a + b * b);
}

int calcPerimeter(int a, int b, int c, int d) {
    return (a + b + c + d);
}

double calcSquare(int a, int b, int c, int d) {
    double height = sqrt(pow(c, 2) - pow((pow(a - b, 2) + pow(c, 2) - pow(d, 2)) / (2 * (a - b)), 2));
    double square = ((a + b) / 2.0) * height;
    return square;
}

double calcMidLane(int a, int b) {
    return (a + b) / 2.0;
}

double calculatePerimeter(double a, double b, double c) {
    return a + b + c;
}

double calculatePloshad(double a, double b, double c) {
    double p = (a + b + c) / 2; // Полупериметр
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

bool Ravnobedrenniy(double a, double b, double c) {
    return ((a == b)*(a == c) *(b == c));
}

int main() {
    setlocale(LC_ALL, "Russian");
    enum menu {
        trapezoid = 1,
        triangle,
        rectangle
    };
    int choice;
    cout << "Выберите с какой фигурой хотите работать \n Трапеция - 1 \n Треугольник - 2 \n Прямоугольник - 3" << endl;
    cin >> choice;
    switch (choice) {
    case menu::trapezoid: {
        vector<int> lengths(4);
        cout << "Введите длины сторон трапеции" << endl;
        for (int i = 0; i < 4; i++) {
            cin >> lengths[i];
        }
        if ((lengths[0] <= 0) or (lengths[1] <= 0) or (lengths[2] <= 0) or (lengths[3] <= 0)) {
            cout << "Трапеции с такими сторонами не существует";
            break;
        }
        sort(begin(lengths), end(lengths));
        int a = lengths[3];
        int b = lengths[2];
        int c = lengths[1];
        int d = lengths[0];
        enum chose {
            perimeter = 1,
            square,
            midLane
        };
        int choose;
        cout << "Выберите, что хотите вычислить: \n Периметр - 1 \n Площадь - 2 \n Средняя линия - 3" << endl;
        cin >> choose;
        switch (choose) {
        case chose::perimeter: {
            int perimeter = calcPerimeter(a, b, c, d);
            cout << "Периметр равен: " << perimeter << endl;
            break;
        }
        case chose::square: {
            double square = calcSquare(a, b, c, d);
            cout << "Площадь равна: " << square << endl;
            break;
        }
        case chose::midLane: {
            double midlane = calcMidLane(a, b);
            cout << "Средняя линия равна: " << midlane << endl;
            break;
        }
        default: {
            cout << "Неверный выбор." << endl;
            break;
        }
        };
        break;
    }
    case menu::triangle: {
        double a, b, c;
        cout << "Введите длины сторон треугольника (a, b, c): ";
        cin >> a >> b >> c;
        enum menu {
            perimeter = 1,
            square,
            check
        };
        if (a + b > c && a + c > b && b + c > a) {
            int choose;
            cout << "Выберите, что хотите вычислить: \n Периметр - 1 \n Площадь - 2 \n Проверка на равнобедренность - 3" << endl;
            cin >> choose;
            switch (choose) {
            case menu::perimeter: {
                double perimeter = calculatePerimeter(a, b, c);
                cout << "Периметр треугольника: " << perimeter << endl;
                break;
            }
            case menu::square: {
                double area = calculatePloshad(a, b, c);
                cout << "Площадь треугольника: " << area << endl;
                break;
            }
            case menu::check: {
                if (Ravnobedrenniy(a, b, c)) {
                    cout << "Треугольник является равнобедренным." << endl;
                }
                else {
                    cout << "Треугольник не является равнобедренным." << endl;
                }
                break;
            }
            default: {
                cout << "Неверный выбор." << endl;
                break;
            }
            }
        }
        else {
            cout << "Треугольник с такими сторонами не существует." << endl;
        }
        break;
    }
    case menu::rectangle: {
        vector<float> lengths(2);
        cout << "Введите длины сторон прямоугольника:" << endl;
        for (int i = 0; i < 2; i++) {
            cin >> lengths[i];
        }
        if (lengths[0] <= 0 or lengths[1] <= 0) {
            cout << "Прямоугольника с такими сторонами не существует";
            break;
        }
        float a = lengths[1];
        float b = lengths[0];
        enum menu {
            perimeter = 1,
            area,
            diagonal
        };
        int choose;
        cout << "Выберите, что хотите вычислить: \n Периметр - 1 \n Площадь - 2 \n Диагональ - 3" << endl;
        cin >> choose;
        switch (choose) {
        case menu::perimeter: {
            float perimeter = Perimeter(a, b);
            cout << "Периметр равен: " << perimeter << endl;
            break;
        }
        case menu::area: {
            float area = Area(a, b);
            cout << "Площадь равна: " << area << endl;
            break;
        }
        case menu::diagonal: {
            float diagonal = Diagonal(a, b);
            cout << "Диагональ равна: " << diagonal << endl;
            break;
        }
        default: {
            cout << "Неверный выбор." << endl;
            break;
        }
        };
        break;
    }
    default: {
        cout << "Неверный выбор." << endl;
        break;
    }
    }
    return 0;
}
