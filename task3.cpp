/*
Перевести заданное пользователем число (целое, положительнео) в 2-ю систему счисления и вывести на экран.
*/
#include <iostream>
int main() {
	int n;
	std::cout << "Enter n:";
	std::cin >> n;
	int deg = 1;
	int tmp = n;
	while ((tmp /= 2) != 0) {
		deg <<= 1;//deg*=2
	}
	std::cout << "Result:";
	while (deg) {
		std::cout << n / deg;
		n %= deg;
		deg >>= 1;//deg/=2
	}
}
