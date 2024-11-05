/*
Author: Nguyễn Đức Mười
Purpose: Assignment 7
b2 S08
*/
#include <iostream>
#include <vector>
using namespace std;

class Resistor {
private:
    double resistance;

public:
    Resistor(double r) : resistance(r) {}

    double getResistance() const {
        return resistance;
    }
};

class ParallelCircuit {
private:
    vector<Resistor> resistors;

public:
    ParallelCircuit(const vector<Resistor>& resistorList)
        : resistors(resistorList) {}

    double calculateEquivalentResistance() const {
        double reciprocalSum = 0.0;
        for (const Resistor& r : resistors) {
            double resistance = r.getResistance();
            if (resistance == 0) return 0.0;
            reciprocalSum += 1.0 / resistance;
        }
        return 1.0 / reciprocalSum;
    }
};

int main() {
    int n;
    cout << "Nhap so luong dien tro: ";
    cin >> n;
    while (n <= 0) {
        cout << "So luong dien tro phai lon hon 0. Vui long nhap lai: ";
        cin >> n;
    }

    vector<Resistor> resistors;
    for (int i = 0; i < n; ++i) {
        double resistance;
        do {
            cout << "Nhap gia tri dien tro R" << i + 1 << ": ";
            cin >> resistance;
            if (resistance <= 0) {
                cout << "Gia tri dien tro phai lon hon 0. Vui long nhap lai.\n";
            }
        } while (resistance <= 0);
        resistors.push_back(Resistor(resistance));
    }

    ParallelCircuit circuit(resistors);
    double equivalentResistance = circuit.calculateEquivalentResistance();
    cout << "Dien tro tuong duong cua " << n
         << " dien tro mac song song la: "
         << equivalentResistance << " Ohm" << endl;

    return 0;
}\
/* test case
Input R1=1, R2=2, R3=3
Output 0.545455
*/

