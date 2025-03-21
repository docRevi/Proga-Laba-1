#include <iostream>
#include <locale>
#include <ostream>

using namespace std;

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
        case menu::trapezoid: {
            
        }
        case menu::triangle: {
            
        }
        case menu::rectangle: {
            
        }
    }
}
