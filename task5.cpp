
/*Перевести заданное пользователем число (целое, положительнео) в заданную пользователем систему счисления (от 2 до 16). Для систем счисления более 10 использовать буквы английского алфавита ABCDEF*/


#include<iostream>
int main() {
	int n;
	std::cout << "Enter the number:";
	std::cin >> n;
	int d;
	std::cout << "Enter the system of count:";
	std::cin >> d;
	int tmp = n;
	int deg = 1;
	while ((tmp /= d) != 0) {
		deg *= d;
	}
	while (deg) {
		if ((n / deg) < 10) {
			std::cout << n / deg;
		}
		else
			std::cout << static_cast<char>(n / deg);
		n %= deg;
		deg /= d;
	}
}
