/*Перевести заданное пользователем число (целое, положительнео) в 16-ю систему счисления и вывести на экран.*/
#include <iostream>
int main() {
	int n;
	std::cout << "Enter n:";
	std::cin >> n;
	int deg = 1;
	int tmp = n;
	while ((tmp /= 16) != 0) {
		deg <<=4;//deg*=16
	}
	std::cout << "Result:";
	while (deg) {
		if ((n / deg) < 10) {
			std::cout << n / deg;
		}
		else
		{
			std::cout << static_cast<char>(((n / deg) % 10) + 65);
		}
		n %= deg;
		deg >>=4;//deg/=16
	}
}
