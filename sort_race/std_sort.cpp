#include <vector>
#include <algorithm>

using namespace std;

vector<int> std_sort(vector<int> data)
{
	sort(data.begin(), data.end());
	return data;
}
vector<double> std_sort(vector<double> data)
{
	return data;
}
