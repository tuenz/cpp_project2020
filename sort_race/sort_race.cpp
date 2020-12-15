// sort_race.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <array>
#include <vector>
#include <string>
#include <iostream>
#include "utils.h" 

using namespace std;

vector<int> GenerateData(int size, int max_value = INT_MAX);
vector<int> read_data();
using Participant = std::vector<int>(*)(std::vector<int>);
void Run(string method_name, Participant p, vector<int> data);


#define RUN(x) {                \
    Run(#x, x, data);           \
}

vector<int> std_sort(vector<int>);
vector<int> merge_sort_by_danilova(vector<int> data);
vector<int> Sort_by_Byankina(vector<int>);


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
                RUN(merge_sort_by_danilova);
                RUN(Sort_by_Byankina);
            }
            break;
        }

        case 2: {

            for (int n : N) {

                auto data = GenerateData(n, 1);
                RUN(std_sort);
                RUN(merge_sort_by_danilova);
                RUN(Sort_by_Byankina);
            }
            break;
        }
        case 3: {

            for (int n : N) {

                //auto data = GenerateData_doubles(n);
                //RUN_Doubles(std_sort_double);
                //RUN_Doubles(Sort_by_Byankina_d);

            }
            break;
        }
        case 4: {

            auto data = read_data();
            RUN(std_sort);
            RUN(merge_sort_by_danilova);
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


