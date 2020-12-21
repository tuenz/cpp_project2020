#include<vector>
using namespace std;

template <typename T>
void SelectionSort_by_Igoshkina(vector<T>& vec, int size)// сортировка выбором
{
    for (int repeat_counter = 0; repeat_counter < size; repeat_counter++)  //
    {
        int temp = vec[0]; // временная переменная для хранения значения перестановки
        for (int element_counter = repeat_counter + 1; element_counter < size; element_counter++)
        {
            if (vec[repeat_counter] > vec[element_counter])  // находим минимальный элемент, меняем его местами с первым элементом
            {
                temp = vec[repeat_counter];
                vec[repeat_counter] = vec[element_counter];
                vec[element_counter] = temp;
            }
        }
    }
}

//template <typename T>
vector<int>Sort_by_Igoshkina(vector<int>data)
{
    if (!data.empty()) {
        int n = data.size();
        SelectionSort_by_Igoshkina(data, n);
    }
    return data;

}
vector<double>Sort_by_Igoshkina(vector<double>data)
{
    if (!data.empty()) {
        int n = data.size();
        SelectionSort_by_Igoshkina(data, n);
    }
    return data;

}