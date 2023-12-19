// Task 2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <windows.h>

struct bank_account {
	int accounts_number{};
	std::string name;
	int money_status{};
} ssd;

void new_status_func(bank_account *p, int new_money_status) {
	(*p).money_status = new_money_status;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	bank_account user;
	int new_money_status{};

	std::cout << "Введите номер счёта: " ;
	std::cin>>user.accounts_number;
	std::cout<<std::endl;
	std::cout << "Введите имя владельца: ";
	std::cin >> user.name;
	std::cout << std::endl;
	std::cout << "Введите балланс: " ;
	std::cin >> user.money_status;
	std::cout << std::endl;
	std::cout << "Введите новый балланс: " ;
	std::cin >> new_money_status;
	std::cout << std::endl;

	new_status_func(&user, new_money_status);

	std::cout << "Ваш счёт: " << user.name << ", " << user.accounts_number << ", " << user.money_status << std::endl;

	return 0;
}

