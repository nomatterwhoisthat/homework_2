/*Для заданных значений n и x вычислить выражение: S = sin(x) + sin(sin(x)) + ... + sin(sin( ... (sin (x)) ... ))*/
/*
#include <iostream>
#include <cmath>
int main()
{
    int n;
    double x;
    std::cout << "Enter n:";
    std::cin >> n;
    std::cout << "Enter x:";
    std::cin >> x;
    double S = 0.0;
    double a1 = sin(x);
    while (n) {
        S += a1;
        a1 = sin(a1);
        n--;
    }
    std::cout << "S=" << S << std::endl;
return 0;
}
*/
