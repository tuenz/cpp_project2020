//#include<vector>
//using namespace std;
//int Partition(vector <int>& data, int l, int r)
//{
//	int x = data[r];
//	int less = l;
//
//	for (int i = l; i < r; ++i) {
//		if (data[i] <= x) {
//			swap(data[i], data[less]);
//			++less;
//		}
//	}
//	swap(data[less], data[r]);
//	return less;
//}
//void QuickSortImpl(vector<int>& data, int l, int r) {
//	if (l < r) {
//		int q = Partition(data, l, r);
//		QuickSortImpl(data, l, q - 1);
//		QuickSortImpl(data, q + 1, r);
//	}
//}
//
//void QuickSort(vector<int>& data) {
//	if (!data.empty()) {
//		QuickSortImpl(data, 0, data.size() - 1);
//	}
//}
//
//vector<int> QuickSort_by_Ageenko(vector<int> data) {
//	QuickSort(data);
//	return data;
//}
#include <vector>
using namespace std;

void quickSort(vector <int> arr, int left, int right) {
    int i = left, j = right;
    int tmp;
    int mid = arr[(left + right) / 2];

    /* partition */
    while (i <= j) {
        while (arr[i] < mid)
            i++;
        while (arr[j] > mid)
            j--;
        if (i <= j) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    };

    /* recursion */
    if (left < j)
        quickSort(arr, left, j);
    if (i < right)
        quickSort(arr, i, right);

}
//vector<int> sort(vector<int> data)
//{
//    quickSort(data, 0, data.size() - 1);
//	return data;
//}
//vector<double> sort_for_integers_only(vector<double> data)
//{
//	//return unsorted vector if data doesn't match your method
//	return data;
//}
vector<int> QuickSort(vector<int>& data) {
	if (!data.empty()) {
        int n = data.size();
		quickSort(data, 0, n - 1);
	}
	return data;

}