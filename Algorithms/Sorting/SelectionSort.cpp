#include <iostream>
using namespace std;

void swapvalues(int *m, int *n)
{
    int temp;
    temp = *m;
    *m = *n;
    *n = temp;
}

int main()
{
    cout << "Enter the number of elements in the array :";
    int size, min;
    cin >> size;
    int array[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the element at " << i + 1 << " position :";
        cin >> array[i];
    }

    cout << "Your array :";
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < size - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < size; j++)
        {
            if (array[j] < array[min])
            {
                min = j;
            }
        }
        swapvalues(&array[min], &array[i]);
    }

    cout << "Sorted array :";
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
}
