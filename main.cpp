#include <iostream>
#include "transport.h"
#include "plane.h"
#include "car.h"

using namespace std;

int main() {
    Plane p1("Boeing", 2015, 10000);
    Plane p2("Airbus", 2020, 11000);
    Car c1("Toyota", 2018, 220);
    Car c2("BMW", 2023, 250);

    Transport* ps[4];
    ps[0] = &p1;
    ps[1] = &p2;
    ps[2] = &c1;
    ps[3] = &c2;

    int choice = 0;

    while (true) {
        cout << "\n--- Меню ---\n";
        cout << "1. Показать весь транспорт\n";
        cout << "2. Изменить год транспорта (через индекс)\n";
        cout << "3. Найти новейший транспорт\n";
        cout << "4. Выйти\n";
        cout << "Выбрать действие: ";
        cin >> choice;

        if (choice == 1) {
           for (int i = 0; i < 4; i++) {
                cout << i << ": ";
                ps[i]->show(); 
            }
        } 
        else if (choice == 2) {
            int index, newYear;
            cout << "Выберите индекс транспорта (0 - 3): ";
            cin >> index;
            if (index >= 0 && index < 4) {
                cout << "Укажите новый год: ";
                cin >> newYear;
                ps[index]->setYear(newYear);
                cout << "Дело сделано)\n";
            } else {
                cout << "Не тот индекс емае\n";
            }
        } 
        else if (choice == 3) {
            int maxYear = 0;
            int maxIndex = 0;
            
            for (int i = 0; i < 4; i++) {
                if (ps[i]->getYear() > maxYear) {
                    maxYear = ps[i]->getYear();
                    maxIndex = i;
                }
            }
            cout << "\n--- САМЫЙ НОВЕЙШИЙ ТРАНСПОРТ ЭТО: ---\n";
            ps[maxIndex]->show();
        } 
        else if (choice == 4) {
            cout << "выходим...\n";
            break;
        } 
        else {
            cout << "Не то выбрал. Попробуй заново\n";
        }
    }

    return 0;
}
