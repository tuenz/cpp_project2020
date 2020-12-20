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

vector<double> GenerateDoublesDanilova(int size)
{
	vector<double> data(size);
	for (double& d : data) 
	{
		d = double(rand() % 1000) * 0.33;
	}
	return data;
}
