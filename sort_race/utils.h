#pragma once
#include <iostream>

using namespace std;


// Вывод меню
void welcome() {
	cout << "Hey. I'm the sorting algorithm" << endl
		 << "1. Sort random integers" << endl
		 << "2. Sort negative integers" << endl
		 << "3. Sort random doubbles" << endl
		 << "4. Sort data from file" << endl
		 << "0. Exit" << endl;
}


// Проверка вводимого числа
int user_choise(string msg) {

	int user_input;

	do {
		cin.clear();
		cin.ignore(1000, '\n');
		cout << msg;
		cin >> user_input;
	} while (cin.fail() || user_input > 5 || user_input < 1);

	return user_input;

}

