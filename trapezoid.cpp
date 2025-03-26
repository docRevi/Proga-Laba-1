#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <locale>


using namespace std;
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
}
int main() {

    setlocale(LC_ALL, "");
    vector<int> lengths(4);
    cout << "Введите длины сторон трапеции" << endl;
    for (int i = 0; i < 4; i++) {
        cin >> lengths[i];
    }
    if ((lengths[0] <= 0) or  (lengths[1] <= 0) or  (lengths[2] <= 0) or (lengths[3] <= 0)) {
        cout << "Трапеции с такими сторонами не существует" << endl;
        return 0;
    }
    sort(begin(lengths), end(lengths));
    int a = lengths[3];
    int b = lengths[2];
    int c = lengths[1];
    int d = lengths[0];
    enum menu {
        perimeter =1,
        square,
        midLane
    };
    int choose;
    cout << "Выберите, что хотите вычислить: \n Периметр - 1 \n Площадь - 2 \n Средняя линию - 3" << endl;
    cin >> choose;
    switch (choose) {
        case menu::perimeter: {
            int Perimeter = calcPerimeter(a, b, c, d);
            cout << "Периметр равен: " << Perimeter << endl;
            break;
        }
        case menu::square: {
            double Square = calcSquare(a, b, c, d);
            cout << "Площадь равна: " << Square << endl;
            break;
        }
        case menu::midLane: {
            double midLane = calcMidLane(a, b);
            cout << "Средняя линия равна: " << midLane << endl;
            break;
        }
    };
    return 0;
}
