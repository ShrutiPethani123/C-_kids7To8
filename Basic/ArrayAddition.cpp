#include<iostream>
using namespace std;

int main()
{
    int a[10],b[10],c[10];
    int n;
    
    cout<<"Eneter the size of array: ";
    cin>>n;

    cout<<"Enter element for first array:"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i << "]"<< ": ";
        cin >> a[i];
    }

    cout<<endl<<"Enter element for Second array:"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout << "b[" << i << "]"<< ": ";
        cin >> b[i];
    }

    cout<<endl << " First Array...." << endl;

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    cout<<endl << " Second Array...." << endl;

    for (int i = 0; i < n; i++)
    {
        cout << b[i] << " ";
    }

    cout<<endl<<"Sum of two array is: "<<endl;
    for(int i=0;i<n;i++)
    {
        c[i] = a[i]+b[i];
        cout<<c[i]<<" ";
    }
}