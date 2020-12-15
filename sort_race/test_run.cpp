#include <vector>
#include <chrono>
#include <string>
#include <iostream>
#include <algorithm>
#include <random>
#include <cmath>

using namespace std;

using Participant = std::vector<int>(*)(std::vector<int>);
using Participant_doubles = std::vector<double>(*)(std::vector<double>);



void Run(string method_name, Participant p, vector<int> data)
{
	auto start = chrono::system_clock::now();
	vector<int> res = p(data);
	auto stop = chrono::system_clock::now();
	auto time = chrono::duration_cast<chrono::microseconds>(stop - start).count();

	cout << method_name << "\t"
		<< data.size() << "\t"
		<< (is_sorted(res.begin(), res.end()) ? to_string(time) + "\tmcs" : "failed") << endl;
}


void Run_doubles(string method_name, Participant_doubles p, vector<double> data)
{
	auto start = chrono::system_clock::now();
	vector<double> res = p(data);
	auto stop = chrono::system_clock::now();
	auto time = chrono::duration_cast<chrono::microseconds>(stop - start).count();

	cout << method_name << "\t"
		<< data.size() << "\t"
		<< (is_sorted(res.begin(), res.end()) ? to_string(time) + "\tmcs" : "failed") << endl;
}



vector<int> GenerateData(int size, int n, int max_value = INT_MAX)
{
	//generate random data or read data from your file
	vector<int> data(size);
	for (int& d : data)
		d = pow(-1, n) * (rand() % max_value);
	return data;
}



vector<double> GenerateData_doubles(int size)
{
	vector<double> data(size);

	for (double& d : data) {
		d = double(rand() % 1000) * 0.33;
	}

	return data;
}
