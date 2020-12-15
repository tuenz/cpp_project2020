#include<vector>
using namespace std;
template <typename T>
void QuikcSort_by_Byankina(vector<T>& mass, int start, int end) {          //передаем в функцию массив и его размер
    int i = start;                                      //индекс первого элемента массива
    int j = end;                               //индекс последнего элемента массива
    int mid = mass[(end + start) / 2];            //значение средннго элемента массива, с которым будем сравнивать
    //поиск и перестановка элементов больше/меньше среднего
    do {
        while (mass[i] < mid) {                      //сравниваем значения элементов первой половины со значением среднего элемента
            i++;
        }
        while (mass[j] > mid) {                      //сравниваем значения элементов второй половины со значением среднего элемента
            j--;
        }
        if (i <= j)
        {
            swap(mass[i], mass[j]);
            i++;
            j--;
        }
    } while (i <= j);
    //сортируем отдельно левый кусок массива
    if (j > start) {
        QuikcSort_by_Byankina(mass, start, j);
    }

    //сортируем отдельно правый кусок массива
    if (i < end) {
        QuikcSort_by_Byankina(mass, i, end);
    }
}
//template <typename T>
vector<int>Sort_by_Byankina(vector<int>data)
{
    if (!data.empty()) {
        int n = data.size();
        QuikcSort_by_Byankina(data, 0, n - 1);
    }
    return data;

}
vector<double>Sort_by_Byankina_d(vector<double>data)
{
    if (!data.empty()) {
        int n = data.size();
        QuikcSort_by_Byankina(data, 0, n - 1);
    }
    return data;

}