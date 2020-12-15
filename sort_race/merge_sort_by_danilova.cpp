#include <vector>
#include <algorithm>
#include <string>
#include <typeinfo>
using namespace std;

template <typename T>
void MergeSort(vector<T>& data, vector<T>& buf, const int& start, const int& end)
{
    if (end <= start)
        return;
    int middle = start + (end - start) / 2;
    MergeSort(data, buf, start, middle);
    MergeSort(data, buf, middle + 1, end);
    for (int CurrentPosition = start; CurrentPosition <= end; CurrentPosition++)
        buf.at(CurrentPosition) = data.at(CurrentPosition);
	int IndexFirstPart = start;
	int IndexSecondPart = middle + 1;
    for (int CurrentPosition = start; CurrentPosition <= end; CurrentPosition++) 
    {
        if (IndexFirstPart > middle) 
        {
            data.at(CurrentPosition) = buf.at(IndexSecondPart);
			IndexSecondPart++;
        }
        else if (IndexSecondPart > end) 
        {
            data.at(CurrentPosition) = buf.at(IndexFirstPart);
			IndexFirstPart++;
        }
        else if (buf[IndexSecondPart] < buf[IndexFirstPart]) 
        {
            data.at(CurrentPosition) = buf.at(IndexSecondPart);
			IndexSecondPart++;
        }
        else 
        {
            data.at(CurrentPosition) = buf.at(IndexFirstPart);
			IndexFirstPart++;
        }
    }
}
 
vector<int> merge_sort_by_danilova(vector<int> data)
{
    //std::string info = typeid(data[0]).name();
	//if (is_sorted(data.begin(), data.end()) || (info == "float") || (info == "double"))
    if (is_sorted(data.begin(), data.end()))
        return data;
    vector <int> buf(data.size());
	MergeSort(data, buf, 0, data.size()-1);
	return data;
}

vector<char> merge_sort_by_danilova(vector<char> data)
{
    if (is_sorted(data.begin(), data.end()))
        return data;
    vector <char> buf(data.size());
    MergeSort(data, buf, 0, data.size() - 1);
    return data;
}

vector<double> merge_sort_by_danilova(vector<double> data)
{
    return data;
}
vector<float> merge_sort_by_danilova(vector<float> data)
{
    return data;
}

