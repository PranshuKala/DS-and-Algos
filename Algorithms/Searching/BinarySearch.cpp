#include <iostream>
#include <algorithm>
using namespace std;

void Binarysearch(int array[], int size, int search)
{
    int start = 0;
    int end = size - 1;
    int mid;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (array[mid] == search)
        {
            cout << "Element found at index " << mid << endl;
            return;
        }
        else if (array[mid] < search)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    cout << "Element not found" << endl;
}

int main()
{
    cout << "Enter the number of elements in the array :";
    int size, search;
    cin >> size;
    int array[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the element at " << i << " position :";
        cin >> array[i];
    }
    cout << endl;
    sort(array, array + size);
    cout << "Your array :";
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << "Enter the element you want to search :";
    cin >> search;
    Binarysearch(array, size, search);

    return 0;
}
