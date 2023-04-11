/*

Array

- Array is a collection of elements that have same data type.
- all elements have continuos memory location.
- index starting with 0
- index ending with length-1

11 34 56 71 83 95 - array - a
0  1  2  3  4  5 - index

size = 6

a[0] = 11
a[1]=34
a[3]=71
a[5]=95
a[6]= Garbage value

*/

#include <iostream>
using namespace std;

int main()
{
    int a[5] = {11, 34, 56, 78, 12};

    cout << "Array........." << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }

    int b[50];

    int n;
    cout<<endl << "Enter size of array: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "b[" << i << "]"<< ": ";
        cin >> b[i];
    }

    cout << "Array...." << endl;

    for (int i = 0; i < n; i++)
    {
        cout << b[i] << " ";
    }
}

/*

1. Take 2 array from user and print sum of two array.

 a - 1 2 3 4 5
 b - 2 4 5 1 3

 c = a+b
 c - 3 6 8 5 8


2. Take one array from user and count all even and odd numbers from array.

4 5 9 1 2 47 3

odd count = 5
even count- 2

3. Take one array from user and count all neagative number.

1 -6 -5 2 -3
count = 3

4. Take one array from user and print sum of all element.

1 2 3 4 5 

sum = 15

5. Take one array from user and check element is present in array or not

1 2 5 7 8 96 1

elem - 5  -> Found at location 2
elem - 11 -> Not Found

6. Take one array from user and print array.
    take also two extra blank array.
    then add odd numbers store into odd array and even number store into 
    even array  

    4 2 5 6 8  7

    even - 4 2 6 8
    odd - 5 7 

    odd[i]=a[i]

7.  Take one array from user and insert element at user given index.

 a- 4 8 9 6 3 1 5(size = 7)

index= 3
elem = 55

a - 4 8 9 55 6 3 1 5 (size=8)







*/