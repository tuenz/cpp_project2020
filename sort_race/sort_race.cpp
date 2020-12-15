// sort_race.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <array>
#include <vector>
#include <string>
#include <iostream>
#include "utils.h" 

using namespace std;

vector<int> GenerateData(int size, int n, int max_value = INT_MAX);
vector<double> GenerateData_doubles(int size);
vector<int> read_data();

using Participant = std::vector<int>(*)(std::vector<int>);
using Participant_doubles = std::vector<double>(*)(std::vector<double>);

void Run(string method_name, Participant p, vector<int> data);
void Run_doubles(string method_name, Participant_doubles p, vector<double> data);


#define RUN(x) {                \
    Run(#x, x, data);           \
}

#define RUN_Doubles(x){         \
    Run_doubles(#x, x, data);   \
}

vector<int> std_sort(vector<int>);
vector<double> std_sort(vector<double> data);

vector<int> merge_sort_by_danilova(vector<int> data);
vector<double> merge_sort_by_danilova(vector<double> data);

vector<int> Sort_by_Byankina(vector<int>);
vector<double>Sort_by_Byankina_d(vector<double>data);


int main()
{
    while (1)
    {
        welcome();
        const array<int, 4> N = { 10, 1'000, 10'000, 1'000'000 };
        switch (user_choise("Select data source: "))
        {
        case 1:
        {
            for (int n : N)
            {
                auto data = GenerateData(n, 2);
                RUN(std_sort);
                RUN(merge_sort_by_danilova);
                RUN(Sort_by_Byankina);
            }
            break;
        }

        case 2:
        {
            for (int n : N) 
            {
                auto data = GenerateData(n, 1);
                RUN(std_sort);
                RUN(merge_sort_by_danilova);
                RUN(Sort_by_Byankina);
            }
            break;
        }
        case 3:
        {

            for (int n : N)
            {

                auto data = GenerateData_doubles(n);
                RUN_Doubles(std_sort);
                RUN_Doubles(merge_sort_by_danilova);
               // RUN_Doubles(Sort_by_Byankina_d);

            }
            break;
        }
        case 4:
        {
            auto data = read_data();
            RUN(std_sort);
            RUN(merge_sort_by_danilova);
            RUN(Sort_by_Byankina);
            break;
        }
        case 0:
        {

            return 0;
            break;

        }
        cout << endl;
        }
    }
}


