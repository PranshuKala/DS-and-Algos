#include <iostream>
using namespace std;
int main()
{
    int row1, col1, row2, col2;
    cout << "Enter the no of rows of first matrix : ";
    cin >> row1;
    cout << "Enter the no of columns of first matrix : ";
    cin >> col1;
    int mat1[row1][col1];
    cout << "Enter the no of rows of second matrix : ";
    cin >> row2;
    cout << "Enter the no of columns of second matrix : ";
    cin >> col2;
    int mat2[row2][col2];
    int mat3[row1][col2];
    if (col1 != row2)
    {
        cout << endl;
        cout << "The multiplication of these two matrices is not possible" << endl;
    }
    else
    {
        cout << endl;
        cout << "Enter the elements of the first matrix -" << endl;
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col1; j++)
            {
                cout << "Enter element at index [" << i << "," << j << "] :";
                cin >> mat1[i][j];
            }
        }
        cout << endl;
        cout << "First Matrix -" << endl;
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col1; j++)
            {
                cout << mat1[i][j] << " ";
            }

            cout << endl;
        }
        cout << endl;
        cout << "Enter the elements of the second matrix :" << endl;
        for (int i = 0; i < row2; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                cout << "Enter element at index [" << i << "," << j << "] :";
                cin >> mat2[i][j];
            }
        }
        cout << endl;
        cout << "Second Matrix" << endl;
        for (int i = 0; i < row2; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                cout << mat2[i][j] << " ";
            }

            cout << endl;
        }

        cout << endl;

        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                mat3[i][j] = 0;
            }
        }
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                for (int k = 0; k < row2; k++)
                {
                    mat3[i][j] += mat1[i][k] * mat2[k][j];
                }
            }
        }
        cout << "Resultant matrix" << endl;
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                cout << mat3[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
