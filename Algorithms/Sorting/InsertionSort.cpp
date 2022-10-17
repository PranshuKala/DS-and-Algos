#include <iostream>
using namespace std;

void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int n;
    cout << "Enter number of element of the array :";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Unsorted Array - ";
    printarray(arr, n);
    for (int i = 1; i < n; i++)
    {
        int right = arr[i];
        int left = i-1;

        while (right<arr[left] && left >= 0)
        {
            arr[left+1]=arr[left];
            --left;
        }
        arr[left+1]=right; 
    }
    cout << "Sorted Array - ";
    printarray(arr, n);
}
