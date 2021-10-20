#include <iostream>
#include <windows.h>
using namespace std;

int x, g_m= 0, x_m = 0;
int number_of_divisors(int x) {
    int g = 0;
    for ( int i = 1; i <= x; i ++ )
    {
        if ( x % i == 0 )
        {
            g++;
        }
    }
    if (g > g_m) {
        g_m = g;
        x_m = x;
    }
}
int entered_numbers (int n) {
    for (int i = 1; i < n+1; ++i) {
        cout << "Введите " << i << " число" << endl;
        cin >> x;
        number_of_divisors(x);
    }
}
int main() {
    int n;
    SetConsoleOutputCP(CP_UTF8);
    cout << "Введите кол-во цифр: ";
    cin >> n;
    entered_numbers(n);
    cout << "Число с мак-ым кол-вом делителей: " << x_m << " и их кол-во: " << g_m << endl;
    return 0;
}