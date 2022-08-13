#include <iostream>
using namespace std;

void linearsearch(int arr[], int size, int search)
{
    int t=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]==search)
        {
            cout<<"Element is Present at the "<<i<<" position";
            t++;
            break;
        }
    }
    if(t==0)
    {cout<<"Element not found";}
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
    cout << "Enter the element to search for :";
    cin >> search;
    linearsearch(array, size, search);
    return 0;
}
