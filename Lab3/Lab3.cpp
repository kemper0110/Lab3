#include <iostream>




int main()
{
	/*
	6 Дано целое число в диапазоне от -99 до 99 
	Вывести его строку-описание вида «отрицательное четное число», 
	«нулевое число»,
	«положительное нечетное число» и т. д.*/

	setlocale(LC_ALL, "rus");
	while (1) {
		int number;
		std::cin >> number;

		if (number == 0)
			std::cout << "нулевое ";
		else {
			if (number > 0)
				std::cout << "положительное ";
			else
				std::cout << "отрицательное ";
			if ((number & 1))
				std::cout << "нечетное ";
			else
				std::cout << "четное ";
		}
		std::cout << "число \n";
	}
	
}
