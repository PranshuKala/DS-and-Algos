#include <iostream>
using namespace std;

void merge(int *arr, int mid, int l, int r)
{
    int n1 = mid - l + 1;
    int n2 = r - mid;
    int start = l;
    int array1[n1];
    int array2[n2];
    for (int i = 0; i <n1 ; i++)
    {
        array1[i] = arr[start];
        start++;
    }

    start = mid + 1;
    for (int j = 0; j < n2; j++)
    {
        array2[j] = arr[start];
        start++;
    }

    start = l;
    int p1=0; 
    int p2 = 0;
    while (p1 < n1 && p2 < n2)
    {
        if (array1[p1] <= array2[p2])
        {
            arr[start] = array1[p1];
            p1++;
        }
        else
        {
            arr[start] = array2[p2];
            p2++;
        }
        start++;
    }
    while (p1 < n1)
    {
        arr[start] = array1[p1];
        p1++;
        start++;
    }
    while (p2 < n2)
    {
        arr[start] = array2[p2];
        p2++;
        start++;
    }
}

void mergesort(int *arr, int left, int right)
{
    if (left < right)
    {
        int mid = left + (right - left) / 2;
        mergesort(arr, left, mid);
        mergesort(arr, mid + 1, right);
        merge(arr, mid, left, right);
    }
    
}

void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
       cout << arr[i] << " ";
    }
}

int main()
{
    int size, l = 0;
    cout << "Enter the number of elements in the array :";
    cin >> size;
    int r = size - 1;
    int array[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the element at " << i + 1 << " position :";
        cin >> array[i];
    }
    cout << "Orignal array :"<<"\n";
    printarray(array, size);
    mergesort(array, l, r);
    cout << "Sorted array :"<<"\n";
    printarray(array, size);
}
