#include <vector>
#include<fstream>
using namespace std;

vector<int> ReadDataFromFileDanilova(string filename)
{
	vector <int> data;
	int number = 0;
	ifstream fin(filename + ".txt");
	if (fin.is_open())
	{
		while (fin >> number)
		{
			data.push_back(number);
		}
	}
	else
		data = {};
	return data;
}