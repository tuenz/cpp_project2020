#include<vector>
using namespace std;
template <typename T>
void QuikcSort_by_Byankina(vector<T>&mass, int start, int end) {          //�������� � ������� ������ � ��� ������
    int i = start;                                      //������ ������� �������� �������
    int j = end;                               //������ ���������� �������� �������
    int mid = mass[(end+start) / 2];            //�������� �������� �������� �������, � ������� ����� ����������
    //����� � ������������ ��������� ������/������ ��������
    do {
        while (mass[i] < mid) {                      //���������� �������� ��������� ������ �������� �� ��������� �������� ��������
            i++;
        }
        while (mass[j] > mid) {                      //���������� �������� ��������� ������ �������� �� ��������� �������� ��������
            j--;
        }
        if (i <= j)
        {
            swap(mass[i], mass[j]);
            i++;
            j--;
        }
    } while (i <= j);
    //��������� �������� ����� ����� �������
    if (j > start) {
         QuikcSort_by_Byankina(mass, start, j );
    }

    //��������� �������� ������ ����� �������
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