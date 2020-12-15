#pragma once
#include <iostream>
using namespace std;

void welcome() {
	cout << "Hey. I'm the sorting algorithm" << endl
		<< "1. Sort random integers" << endl
		<< "2. Sort negative integers" << endl
		<< "3. Sort random doubbles" << endl
		<< "4. Sort data from file" << endl
		<< "0. Exit" << endl;
}

int user_choise(string msg) {

	int user_input;
	cout << msg;
	while ((cin >> user_input).fail() || (user_input > 5) || (user_input < 0))
	{
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "Type number (" << 0 << "-" << 4 << "):";
	}

	return user_input;

}