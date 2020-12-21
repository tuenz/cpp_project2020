#pragma once
#include <vector>

template <typename T>
using Participant = std::vector<T>(*)(std::vector<T>);

std::vector<int> std_sort(std::vector<int>);
std::vector<double> sort_for_integers_only(std::vector<double> data);
//--------------------Team Danilova---------------------------
std::vector<int> merge_sort_by_danilova(std::vector<int> data);
std::vector<double> merge_sort_by_danilova(std::vector<double> data);
std::vector<int> Insertion_sort_Stepuro(std::vector<int> data);
std::vector<double> Insertion_sort_Stepuro(std::vector<double> data);
std::vector<int> QuickSort_by_Byankina(std::vector<int> data);
std::vector<double> QuickSort_by_Byankina(std::vector<double> data);

// igoskina, selection
std::vector<int> Sort_by_Igoshkina(std::vector<int> data);
std::vector<double> Sort_by_Igoshkina_d(std::vector<double> data);

// makarov, heapsort
std::vector<int> heapsort_by_makarov(std::vector<int> data);
std::vector<double> heapsort_by_makarov_d(std::vector<double> data);
//--------------------Team Danilova---------------------------