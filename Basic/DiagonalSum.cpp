#include<iostream>
using namespace std;

int main()
{
    int a[10][10];
    int row,col;
    cout<<"Enter Row no.";
    cin>>row;
    cout<<"Enter Col no.";
    cin>>col;

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<"a["<<i<<"]["<<j<<"]: ";
            cin>>a[i][j];
        }
    }


    cout<<"Array is...."<<endl;

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    int primSum=0,secSum=0;

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(i==j)
            {
                primSum=primSum+a[i][j];
            }

            if(i==row-j-1)
            {
                secSum=secSum+a[i][j];
            }
        }
    }

    cout<<"Sum of Primary Diagonal is: "<<primSum<<endl;
    cout<<"Sum of Secondary Diagonal is: "<<secSum<<endl;

}

/*
  0 1 2
0 1 2 3
1 4 1 6
2 5 7 8

(n*n)
n=3

PD - 1 1 8 ( i==j)
SD - 3 1 5  ( i+j=n-1) -> i=n-j-1


*/