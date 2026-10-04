#include <iostream>
using namespace std;

int main()
{
    // задача Begin9 - визначення першої цифри (сотень) тризначного числа
    int A, hundredsDigit;
    cout << "Enter three-digit number: ";
    cin >> A;
    hundredsDigit = A / 100;
    cout << "First digit (hundreds) = " << hundredsDigit << endl;

    // задача Begin19 - визначення кількості повних хвилин, що минули з початку доби
    int N, minutes;
    cout << "Enter number of seconds N: ";
    cin >> N;
    minutes = N / 60;
    cout << "Full minutes passed = " << minutes << endl;

    // задача Begin40 - розмін суми купюрами по 200 грн і залишок
    int M, banknotes, change;
    cout << "Enter amount M (UAH): ";
    cin >> M;
    banknotes = M / 200;
    change = M % 200;
    cout << "Number of 200 UAH banknotes = " << banknotes << endl;
    cout << "Remaining change = " << change << endl;

    return 0;
}
