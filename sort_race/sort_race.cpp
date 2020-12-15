// sort_race.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <array>
#include <vector>
#include <string>
#include <iostream>

#include "utils.h" 

using namespace std;


// Векторы с набором данных
vector<int> GenerateData(int size, int power, int max_value = INT_MAX);
vector<double> GenerateData_doubles(int size);


//
using Participant = std::vector<int>(*)(std::vector<int>);
using Participant_doubles = std::vector<double>(*)(std::vector<double>);


// Запуск
void Run(string method_name, Participant p, vector<int> data);
void Run_doubles(string method_name, Participant_doubles p, vector<double> data);


#define RUN(x) {                \
    Run(#x, x, data);           \
}

#define RUN_Doubles(x){         \
    Run_doubles(#x, x, data);   \
}


//place your method name here
vector<int> std_sort(vector<int>);

// makarov, heapsort, reboots
vector<int> heapsort_by_makarov(vector<int>);
vector<double> heapsort_by_makarov_double(vector<double>);


int main()
{
    // Ожидание ответа от пользователя
    setlocale(LC_ALL, "Russian");
    welcome();
    int user_point = user_choise("Select data source: ");

    // Количество символов в списке
    const array<int, 4> N = { 10, 1'000, 10'000, 1'000'000 };

    switch (user_point) {

        case 1: {
            for (int n : N) {

                auto data = GenerateData(n, 2);

                // default sorting algo
                RUN(std_sort);

                // makarov, heapsort
                RUN(heapsort_by_makarov);
            }
            break;
        }

        case 2: {

            for (int n : N) {

                auto data = GenerateData(n, 1);
                cout << data[0];

                // default sorting algo
                RUN(std_sort);

                // makarov, heapsort
                RUN(heapsort_by_makarov);
            }
            break;
        }

        case 3: {

            for (int n : N) {

                auto data = GenerateData_doubles(n);

                // default sorting algo
                //RUN_Doubles(std_sort_double);

                // makarov, heapsort
                RUN_Doubles(heapsort_by_makarov_double);
            }
            break;
        }

        case 4: {
            break;
        }
    }
}
