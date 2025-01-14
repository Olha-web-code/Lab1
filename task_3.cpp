#include <iostream>
using namespace std;

int main() {
    int code;

    cout << "Введіть числовий код сузір'я (1-5): ";
    cin >> code;

    switch (code) {
        case 1:
            cout << "Сузір'я 1 має 88 зірок." << endl;
            break;
        case 2:
            cout << "Сузір'я 2 має 120 зірок." << endl;
            break;
        case 3:
            cout << "Сузір'я 3 має 54 зірки." << endl;
            break;
        case 4:
            cout << "Сузір'я 4 має 77 зірок." << endl;
            break;
        case 5:
            cout << "Сузір'я 5 має 101 зірку." << endl;
            break;
        default:
            cout << "Невідомий код сузір'я! Введіть код від 1 до 5." << endl;
    }

    return 0;
}
