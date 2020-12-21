#include <vector>
using namespace std;

template <typename T>
void Insertion_Stepuro(vector<T>& data)
{
	T bufer = 0; //временное хранилище элементов
	int j = 0;
	for (int i = 1; i < (int)data.size(); i++)
	{ //цикл выделения элемента из массива
		bufer = data[i];
		for (j = i - 1; (j >= 0) && (data[j] > bufer); j--)
			data[j + 1] = data[j]; //смещение элементов на 1 выше. Идет влево
		data[j + 1] = bufer;
	}
}

vector<int> Insertion_sort_Stepuro(vector<int> data)
{
	Insertion_Stepuro(data);
	return data;
}
vector<double> Insertion_sort_Stepuro(vector<double> data)
{
	Insertion_Stepuro(data);
	return data;
}