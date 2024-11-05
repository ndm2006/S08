/*
Author: Nguyễn Đức Mười
Purpose: Assignment 7
b3 S08
*/
#include <iostream>
#include <string>
using namespace std;

// Hàm hoán đổi hai ký tự
void swap(char &a, char &b) {
    char temp = a;
    a = b;
    b = temp;
}

// Hàm hoán đổi hai chuỗi ký tự
void swap(string &a, string &b) {
    string temp = a;
    a = b;
    b = temp;
}

int main() {
    // Nhập và hoán đổi hai ký tự
    char char1, char2;
    cout << "Nhap ky tu thu nhat: ";
    cin >> char1;
    cout << "Nhap ky tu thu hai: ";
    cin >> char2;
    swap(char1, char2);
    cout << "Sau khi hoan doi, ky tu thu nhat: " << char1
         << ", ky tu thu hai: " << char2 << endl;

    // Nhập và hoán đổi hai chuỗi ký tự
    string str1, str2;
    cout << "Nhap chuoi thu nhat: ";
    cin >> str1;
    cout << "Nhap chuoi thu hai: ";
    cin >> str2;
    swap(str1, str2);
    cout << "Sau khi hoan doi, chuoi thu nhat: " << str1
         << ", chuoi thu hai: " << str2 << endl;

    return 0;
}
/* test case
Input: Nhap ki tu thu nhat 5, ki tu thu hai 4
Output: Ki tu thu nhat 4, ki tu thu hai 5
*/
