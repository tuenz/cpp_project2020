// sort_race.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <array>
#include <vector>
#include <string>


using namespace std;

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
vector<int> QuickSort(vector<int>);

int main()
{
    const array<int, 4> N = { 10, 1'000, 10'000, 1'000'000 };
    for (int n : N)
    {
        auto data = GenerateData(n,2);
        RUN(std_sort);
        RUN(QuickSort);
		//run your method here
    }
}
