#include <iostream>
using namespace std;
int main()
{
    char op;
    float num1, num2;
    cout << "masukan angka pertama (+, -, *, /): ";
    cin >> op;
    if (cin.fail() || (op != '+' && op != '-' && op != '*' && op != '/'))
    {
        cerr << "Kesalahan! Operator tidak valid ." << endl;
        return 1;
    }
    cout << "masukan angka pertama: ";
    cin >> num1;
    if (cin.fail())
    {
        cerr << "Kesalahan! Operator tidak valid." << endl;
        return 1;
    }
    cout << "masukan angka ke dua: ";
    cin >> num2;
    if (cin.fail())
    {
        cerr << "Kesalahan! Operator tidak valid." << endl;
        return 1;
    }
    switch (op)
    {
    case '+':
        cout << num1 + num2;
        break;
    case '-':
        cout << num1 - num2;
        break;
    case '*':
        cout << num1 * num2;
        break;
    case '/':
        if (num2 == 0)
        {
            cerr << "Kesalahan! Pembagian dengan nol tidak diperbolehkan."
                 << endl;
            return 1;
        }
        cout << num1 / num2;
        break;
    default:
        cerr << "Kesalahan! Operator tidak dikenal." << endl;
        return 1;
    }
    return 0;
}
