;
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
        if (lengths[0] <= 0  lengths[1] <= 0) {
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
