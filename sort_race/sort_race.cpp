﻿// sort_race.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <array>
#include <vector>
#include <string>

using namespace std;

vector<int> GenerateData(int size, int max_value = INT_MAX);
using Participant = std::vector<int>(*)(std::vector<int>);
void Run(string method_name, Participant p, vector<int> data);


#define RUN(x) {                \
    Run(#x, x, data);           \
}

//place your method name here
vector<int> std_sort(vector<int>);

// makarov, heapsort
vector<int> heapsort_by_makarov(vector<int>);


int main()
{
    const array<int, 4> N = { 10, 1'000, 10'000, 1'000'000 };
    for (int n : N)
    {
        auto data = GenerateData(n);
        RUN(std_sort);

		//run your method here

        // run makarov method
        RUN(heapsort_by_makarov);
    }
}
