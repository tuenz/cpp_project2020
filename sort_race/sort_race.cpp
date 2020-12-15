//// sort_race.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
////
//




#include <array>
#include <vector>
#include <string>
#include <iostream>

#include "utils.h" 


////place your method name here
//vector<int> std_sort(vector<int>);
//vector<double> std_sort_double(vector<double>);
//
//// makarov, heapsort, reboots
//vector<int> Sort_by_Byankina(vector<int>);
//vector<double> Sort_by_Byankina_d(vector<double>);
//
//
//int main()
//{
//    // Ожидание ответа от пользователя
//    setlocale(LC_ALL, "Russian");
//    welcome();
//    int user_point = user_choise("Select data source: ");
//
//    // Количество символов в списке
//    const array<int, 4> N = { 10, 1'000, 10'000, 1'000'000 };
//
//    switch (user_point) {
//
//    case 1: {
//        for (int n : N) {
//
//            auto data = GenerateData(n, 2);
//
//            // default sorting algo
//            RUN(std_sort);
//
//            // makarov, heapsort
//            RUN(Sort_by_Byankina);
//        }
//        break;
//    }
//
//    case 2: {
//
//        for (int n : N) {
//
//            auto data = GenerateData(n, 1);
//            cout << data[0];
//
//            // default sorting algo
//            RUN(std_sort);
//
//            // makarov, heapsort
//            RUN(Sort_by_Byankina);
//        }
//        break;
//    }
//
//    case 3: {
//
//        for (int n : N) {
//
//            auto data = GenerateData_doubles(n);
//
//            // default sorting algo
//            RUN_Doubles(std_sort_double);
//
//            // makarov, heapsort
//            RUN_Doubles(Sort_by_Byankina_d);
//        }
//        break;
//    }
//
//    case 4: {
//
//        auto data = read_data();
//
//        // default sorting algo
//        RUN(std_sort);
//
//        // makarov, heapsort
//        RUN(Sort_by_Byankina);
//
//        break;
//    }
//    }
//}



using namespace std;

vector<int> GenerateData(int size, int power, int max_value = INT_MAX);
vector<double> GenerateData_doubles(int size);
vector<int> read_data();


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
vector<double> std_sort_double(vector<double>);
vector<int> Sort_by_Byankina(vector<int>);
vector<double> Sort_by_Byankina_d(vector<double>);

int main()
{
    while (1) 
    {
        welcome();
        int user_point = user_choise("Select data source: ");
        const array<int, 4> N = { 10, 1'000, 10'000, 1'000'000 };
        switch (user_point) {

        case 1: {
            for (int n : N) {

                auto data = GenerateData(n, 2);
                RUN(std_sort);
                RUN(Sort_by_Byankina);
            }
            break;
        }

        case 2: {

            for (int n : N) {

                auto data = GenerateData(n, 1);
                RUN(std_sort);
                RUN(Sort_by_Byankina);
            }
            break;
        }
        case 3: {

            for (int n : N) {
                
                auto data = GenerateData_doubles(n);
                //RUN_Doubles(std_sort_double);
                //RUN_Doubles(Sort_by_Byankina_d);

            }
            break;
        }
        case 4: {

            auto data = read_data();
            RUN(std_sort);
            RUN(Sort_by_Byankina);

            break;
        }
        case 0:
        
            return 0;
            break;
        
        }
        cout << endl;
    }
}
