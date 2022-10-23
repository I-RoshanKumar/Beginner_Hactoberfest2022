#include <iostream>
using namespace std;

int main()
{
    int rows1, cols1, rows2, cols2;
    cout << "Enter number of Rows of the Matrix 1: ";
    cin >> rows1;
    cout << "Enter number of Columns of the Matrix 2: ";
    cin >> cols1;

    cout << "Enter number of Rows of the Matrix 2: ";
    cin >> rows2;
    cout << "Enter number of Columns of the Matrix 2: ";
    cin >> cols2;
    cout << endl;
    if (rows1 != rows2 || cols1 != cols2)
    {
        cout << "Matrices cannot be added as number of rows and columns of both Matrices do not match" << endl;;
    }
    else
    {
        int matrix1[rows1][cols1];
        int matrix2[rows2][cols2];
        int matrix_sum[rows1][cols1];
        cout << "Enter Matrix 1:" << endl;
        for (int i = 0; i < rows1; i++)
        {
            for (int j = 0; j < cols1; j++)
            {
                cin >> matrix1[i][j];
            }
        }

        cout << endl << "Enter Matrix 2:" << endl;
        for (int i = 0; i < rows2; i++)
        {
            for (int j = 0; j < cols2; j++)
            {
                cin >> matrix2[i][j];
            }
        }
        cout << endl << "The Sum of the two matrices is: " << endl;

        for (int i = 0; i < rows2; i++)
        {
            for (int j = 0; j < cols2; j++)
            {
                matrix_sum[i][j] = matrix1[i][j]+ matrix2[i][j];
                cout << matrix_sum[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}