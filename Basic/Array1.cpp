/*

Array --> collection of elements that have same data type

-> continuos memory location
-> index start with 0
-> end with size-1

size = 5

44 77 88 99 12
0  1  2  3  4


*/

#include<iostream>
using namespace std;

int main()
{
    // int a[5] = {1,2,3,4,5};
    int a[5];
    cout<<"Enter elements for array"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<"a["<<i<<"]:";
        cin>>a[i];
    }

    cout<<"Array is: "<<endl;
    for(int i=0;i<5;i++)
    {
       cout<<a[i]<<" ";
    }

    return 0;
}

/*

a - 1 2 3 4 5
b - 5 3 6 1 2

c - 6 5 9 5 7
 
*/