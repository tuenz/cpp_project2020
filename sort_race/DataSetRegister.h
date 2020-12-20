#pragma once
#include <string>
#include "DataSets.h"

template <typename T>
struct DataSet
{
    std::string description;
    std::vector<T> data;
};
std::vector<DataSet<int>> GenerateIntDataSets()
{
    return {
        { "random integer", GenerateData(10) },
        { "random integer", GenerateData(100) },
        { "random integer", GenerateData(1000) },
        { "Danilova team-already sorted integer", ReadDataFromFileDanilova("DanilovaAlreadySortedInt")},
        { "Danilova team-worst for mergesort integer", ReadDataFromFileDanilova("DanilovaPartlySortedInt")},
        { "Danilova team-worst for quicksort integer", ReadDataFromFileDanilova("DanilovaWorstQuick")},
    };
}
std::vector<DataSet<double>> GenerateDoubleDataSets()
{
    return {
       { "asc sorted double", {1.0, 2.0} },
       { "desc sorted double", {3.0,2.0} },
       { "just doubles", GenerateDoubleData() },
       { "Danilova team-random doubles, size=10", GenerateDoublesDanilova(10)},
       { "Danilova team-random doubles, size=100", GenerateDoublesDanilova(100)},
       { "Danilova team-random doubles, size=1000", GenerateDoublesDanilova(1000)},
    };
}