#include <iostream>
#include <locale>
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

int main() {
    setlocale(LC_ALL, "");
    vector<float> lengths(2);
    cout << "Введите длины сторон прямоугольника:" << endl;
    for (int i = 0; i < 2; i++) {
        cin >> lengths[i];
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
        float Per = Perimeter(a, b);
        cout << "Периметр равен: " << Per << endl;
        break;
    }
    case menu::area: {
        float Ar = Area(a, b);
        cout << "Площадь равна: " << Ar << endl;
        break;
    }
    case menu::diagonal: {
        float Diag = Diagonal(a, b);
        cout << "Диагональ равна: " << Diag << endl;
        break;
    }
    };
    return 0;
}
