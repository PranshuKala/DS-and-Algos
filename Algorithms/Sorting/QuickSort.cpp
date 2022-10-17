#include <iostream>
using namespace std;

void swap(int *x, int *y)
{
    int tmp;
    tmp = *x;
    *x = *y;
    *y = tmp;
}

int Partition(int *array, int start, int end)
{
    int pivot = array[end];
    int BreakIndex = start;

    for (int i = start; i < end; i++)
    {
        if (array[i] <= pivot)
        {
            swap(&array[i], &array[BreakIndex]);
            BreakIndex++;
        }
    }
    swap(&array[BreakIndex], &array[end]);
    return BreakIndex;
}

void QuickSort(int *array, int start, int end)
{
    if (start < end)
    {
        int BreakIndex = Partition(array, start, end);
        QuickSort(array, start, BreakIndex - 1);
        QuickSort(array, BreakIndex + 1, end);
    }
}

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements : "<<'\n';
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    QuickSort(arr, 0, n - 1);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
