/*

Array
1. single Dimension - 1D Array

2. Multi Dimension - 2D Array

row and columns

1 2 3
4 8 5
1 2 9
5 4 6

rows =  4
cols = 3

3*4 - matrix(Array)
row*col

-------------------
1*2

5 9

-------------------
2*2

1 6
2 9

-----------
   0 1 2

0- 1 2 3
1- 4 5 6

2*3

-----------------
*/

#include <iostream>
using namespace std;

int main()
{
    // int a[2][3]={{1,2,3},{4,5,6}}; // a[row][col]

    // for(int i=0;i<2;i++)
    // {
    //     for(int j=0;j<3;j++)
    //     {
    //         cout<<a[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    int a[10][10];
    int row, col;
    cout << "Enter Row no.";
    cin >> row;
    cout << "Enter Col no.";
    cin >> col;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "a[" << i << "][" << j << "]: ";
            cin >> a[i][j];
        }
    }

    // a[2][1] -> 2nd row and ist col

    cout << "Array is...." << endl;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Transpode of matrix:" << endl;

    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cout<<a[j][i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}

/*

1. Take two array from user and perform subtrcation opertor of two array.

    a -
    1 2 3
    4 5 6


    b-
    1 5 4
    2 3 1

    c = a-b

    0  -3 -1
    2   2  5

2. Take one array from user and print sum of diagonal element.


    4 5 6
    1 2 3
    8 6 1


    -> Primary diagonal -> 4 2 1 -> sum= 7
    -> Secondary diagonal -> 6 2 8 -> sum = 16

3. Take one array from user and print Transpose of that matrix.

A
    1 2 3
    4 5 6
    (2*3)

Transpose of A
    1 4
    2 5
    3 6
    (3*2)


*/