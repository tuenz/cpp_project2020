#include <vector>
#include <iostream>

using namespace std;


// Просеиваем элементы
template <typename T>
void sow_elements(vector<T>& numbers, int n, int i) {

    int largest = i;

    // Получаем индексы соседей
    int l = 2 * i + 1;
    int r = 2 * i + 2;

    // Если левый дочерний элемент больше корня
    if (l < n && numbers[l] > numbers[largest])
        largest = l;

    // Если правый дочерний элемент больше
    if (r < n && numbers[r] > numbers[largest])
        largest = r;

    // Если самый большой элемент не корень
    if (largest != i)
    {

        // Перенос текущего корня в конец
        swap(numbers[i], numbers[largest]);

        // Рекурсивно проосеиваем элементы
        sow_elements(numbers, n, largest);

    }

}


// Основная функция сортировки 
template <typename T>
void heapsort_algo(vector<T>& sequence, int n) {

    // Группировка массива
    for (int i = n / 2 - 1; i >= 0; i--) {
        sow_elements(sequence, n, i);
    }

    // Итерациями прорабатываем элементы в массиве
    for (int i = n - 1; i >= 0; i--) {

        // Перемещаем элемент в конец
        swap(sequence[0], sequence[i]);

        // Группируем оставшиеся элементы
        sow_elements(sequence, i, 0);
    }

}



// Аналог main
vector<int> heapsort_by_makarov(vector<int> data)
{

    // Размер массива 
    size_t n = data.size();

    // Запуск алгоритм
    heapsort_algo(data, n);

    return data;

}

vector<double> heapsort_by_makarov_double(vector<double> data)
{

    // Размер массива 
    size_t n = data.size();

    // Запуск алгоритм
    heapsort_algo(data, n);

    return data;

}
