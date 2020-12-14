#include<iostream>
using namespace std;

void QuikcSort_by_Byankina(int mass[], int size) {          //передаем в функцию массив и его размер
    int i = 0;                                      //индекс первого элемента массива
    int j = size - 1;                               //индекс последнего элемента массива
    int mid = mass[size / 2];                        //значение средннго элемента массива, с которым будем сравнивать
    //поиск и перестановка элементов больше/меньше среднего
    do {
        while (mass[i] < mid) {                      //сравниваем значения элементов первой половины со значением среднего элемента
            i++;
        }
        while (mass[j] > mid) {                      //сравниваем значения элементов второй половины со значением среднего элемента
            j--;
        }
        int t = mass[i];                              //замена элементов местами
        mass[i] = mass[j];
        mass[j] = t;
        i++;
        j--;
    } while (i <= j);
    //сортируем отдельно левый кусок массива
    if (j > 0) {
        QuikcSort_by_Byankina(mass, j + 1);
    }
    //сортируем отдельно правый кусок массива
    if (i < size) {
        QuikcSort_by_Byankina(&mass[i], size - i);
    }
}
//int main()
//{
//	const int n = 10;
//    int mass[n];
//
//	for (int i = 0;i < n;i++)
//	{
//		mass[i] = rand();
//		cout << mass[i] << " ";
//	}
//    cout << endl;
//    QuikcSort_by_Byankina(mass,n);
//    for (int i = 0;i < n;i++)
//    {
//        cout << mass[i] << " ";
//    }
//
//}