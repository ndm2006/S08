/*
Author: Nguyễn Đức Mười
Purpose: Assignment 7
b1 S08
*/
#include <iostream>
using namespace std;

class Resistor {
private:
    double resistance;

public:
    // Constructor
    Resistor(double r) : resistance(r) {}

    // Hàm getter để lấy giá trị điện trở
    double getResistance() const {
        return resistance;
    }
};

class ParallelCircuit {
private:
    Resistor r1;
    Resistor r2;

public:
    // Constructor
    ParallelCircuit(Resistor resistor1, Resistor resistor2)
        : r1(resistor1), r2(resistor2) {}

    // Hàm tính điện trở tương đương
    double calculateEquivalentResistance() const {
        double r1_value = r1.getResistance();
        double r2_value = r2.getResistance();
        return (r1_value * r2_value) / (r1_value + r2_value);
    }
};

int main() {
    double r1_value, r2_value;

    cout << "Nhap gia tri R1 ";
    cin >> r1_value;
    cout << "Nhap gia tri R2 ";
    cin >> r2_value;

    // Tạo các đối tượng điện trở
    Resistor r1(r1_value);
    Resistor r2(r2_value);

    // Tạo đối tượng mạch song song và tính điện trở tương đương
    ParallelCircuit circuit(r1, r2);
    double equivalentResistance = circuit.calculateEquivalentResistance();

    cout << "Dien tro tuong duong 2 dien tro mac song song la "
         << equivalentResistance << " Ohm" << endl;

    return 0;
}
/* test case
input R1=3, R2=4
Output Rtd=1.714
*/
