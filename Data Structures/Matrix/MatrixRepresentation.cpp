#include <iostream>
using namespace std;
int main()
{
    cout << "Enter the rows of matrix :";
    int a, b;
    cin >> a;
    cout << "Enter the columns of matrix :";
    cin >> b;
    int matrix[a][a];
    cout << "Enter Elements of the matrix :"
         << "\n";
    for (int i = 0; i < a; i++)

    {
        for (int j = 0; j < b; j++)
        {
            cout << "Enter element at " << i << "," << j << " position :";
            cin >> matrix[i][j];
        }
    }
    cout << "\n";
    cout<< "Your matrix is : "<<"\n";
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
