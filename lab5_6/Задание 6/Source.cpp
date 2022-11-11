#include <iostream>
int main()
{
	setlocale(LC_CTYPE, "Russian");
	int k;
	puts("Вы хотите купить телефон? (1-да, 2-нет)");
	std::cin >> k;
	switch (k)
	{
	case 1: { puts("Какой? (1- Сяоми, 2-Айфон, 3-Самсунг)");
		std::cin >> k;
		switch (k)
		{
		case 1: puts("Лучший выбор"); break;
		case 2: puts("Ужасный выбор"); break;
		case 3: puts("Неплохо");
			break;
		}
		break;
	}
	case 2: puts("Правильно, телефон крадет много времени"); break;
	default: puts("Некорректный вариант"); break;
	}
	return 0;
}