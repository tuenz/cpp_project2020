#include <vector>
#include <iostream>

using namespace std;


// ���������� ��������
template <typename T>
void sow_elements(vector<T>& numbers, int n, int i) {

    int largest = i;

    // �������� ������� �������
    int l = 2 * i + 1;
    int r = 2 * i + 2;

    // ���� ����� �������� ������� ������ �����
    if (l < n && numbers[l] > numbers[largest])
        largest = l;

    // ���� ������ �������� ������� ������
    if (r < n && numbers[r] > numbers[largest])
        largest = r;

    // ���� ����� ������� ������� �� ������
    if (largest != i)
    {

        // ������� �������� ����� � �����
        swap(numbers[i], numbers[largest]);

        // ���������� ����������� ��������
        sow_elements(numbers, n, largest);

    }

}


// �������� ������� ���������� 
template <typename T>
void heapsort_algo(vector<T>& sequence, int n) {

    // ����������� �������
    for (int i = n / 2 - 1; i >= 0; i--) {
        sow_elements(sequence, n, i);
    }

    // ���������� ������������� �������� � �������
    for (int i = n - 1; i >= 0; i--) {

        // ���������� ������� � �����
        swap(sequence[0], sequence[i]);

        // ���������� ���������� ��������
        sow_elements(sequence, i, 0);
    }

}



// ������ main
vector<int> heapsort_by_makarov(vector<int> data)
{

    // ������ ������� 
    size_t n = data.size();

    // ������ ��������
    heapsort_algo(data, n);

    return data;

}

vector<double> heapsort_by_makarov_double(vector<double> data)
{

    // ������ ������� 
    size_t n = data.size();

    // ������ ��������
    heapsort_algo(data, n);

    return data;

}
