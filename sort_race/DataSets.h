#pragma once
#include <vector>

//datasets by TM
std::vector<int> GenerateData(int size, int max_value = INT_MAX);
std::vector<double> GenerateDoubleData();

//datasets by Danilova
std::vector<int> ReadDataFromFileDanilova(std::string filename);
std::vector<double> GenerateDoublesDanilova(int size);