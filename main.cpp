#include <iostream>
#include <locale>
#include <ostream>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;

<<<<<<< HEAD
int calcPerimeter(int a,int b, int c, int d) {
    return (a+b+c+d);
}
double calcSquare (int a, int b, int c, int d) {
    double height = sqrt(c ^ 2 - (((a - b) ^ 2 + c ^ 2 - d ^ 2) / (2 * (a - b)) ^ 2));
    double square = ((a+b)/2)*height;
    return square;
}
double calcMidLane(int a, int b) {
    return (a+b)/2.0;
=======
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
    double height = sqrt(c ^ 2 - (((a - b) ^ 2 + c ^ 2 - d ^ 2) / (2 * (a - b)) ^ 2));
    double square = ((a + b) / 2) * height;
    return square;
}
double calcMidLane(int a, int b) {
    return (a + b) / 2.0;
>>>>>>> rectangle
}

int main() {
    setlocale(LC_ALL, "Russian");
    enum menu {
        trapezoid = 1,
        triangle,
        rectangle
    };
    int choice;
    cout << "Выберите с какой фигурой хотите работать \n Трапеция - 1 \n Треугольник - 2 \n Прямоугольник -3" << endl;
    cin >> choice;
    switch (choice) {
<<<<<<< HEAD
        case menu::trapezoid: {
            vector<int> lengths(4);
            cout << "Введите длины сторон трапеции" << endl;
            for (int i = 0; i < 4; i++) {
                cin >> lengths[i];
            }
            sort(begin(lengths), end(lengths));
            int a = lengths[3];
            int b = lengths[2];
            int c = lengths[1];
            int d = lengths[0];
            enum chose {
                perimeter =1,
                square,
                midLane
            };
            int choose;
            cout << "Выберите, что хотите вычислить: \n Периметр - 1 \n Площадь - 2 \n Средняя линию - 3" << endl;
            cin >> choose;
            switch (choose) {
                case chose::perimeter: {
                    int Perimeter = calcPerimeter(a, b, c, d);
                    cout << "Периметр равен: " << Perimeter << endl;
                    break;
                }
                case chose::square: {
                    double Square = calcSquare(a, b, c, d);
                    cout << "Площадь равна: " << Square << endl;
                    break;
                }
                case chose::midLane: {
                    double midlane = calcMidLane(a, b);
                    cout << "Средняя линия равна: " << midlane << endl;
                    break;
                }
            };
            
            break;
        }
        case menu::triangle: {
            break;
        }
        case menu::rectangle: {
=======
    case menu::trapezoid: {
        vector<int> lengths(4);
        cout << "Введите длины сторон трапеции" << endl;
        for (int i = 0; i < 4; i++) {
            cin >> lengths[i];
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
        cout << "Выберите, что хотите вычислить: \n Периметр - 1 \n Площадь - 2 \n Средняя линию - 3" << endl;
        cin >> choose;
        switch (choose) {
        case chose::perimeter: {
            int Perimeter = calcPerimeter(a, b, c, d);
            cout << "Периметр равен: " << Perimeter << endl;
            break;
        }
        case chose::square: {
            double Square = calcSquare(a, b, c, d);
            cout << "Площадь равна: " << Square << endl;
>>>>>>> rectangle
            break;
        }
        case chose::midLane: {
            double midlane = calcMidLane(a, b);
            cout << "Средняя линия равна: " << midlane << endl;
            break;
        }
        };

        break;
    }
<<<<<<< HEAD
=======
    case menu::triangle: {
        break;
    }
    case menu::rectangle: {
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
        break;
    }
    }
>>>>>>> rectangle
    return 0;
}
