#include<iostream>
using namespace std;

int main()
{
    int a[5];
    cout<<"Enter 5 element: ";

    for(int i=0;i<5;i++)
    {
        cin>>a[i];

    }

    cout<<endl<<"Array..."<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }

    int evenCount=0,oddCount=0;

    for(int i=0;i<5;i++)
    {
        if(a[i]%2==0)
        {
            evenCount++;
        }else{
            oddCount++;
        }

        
    }

    cout<<endl<<"Odd Elements are: "<<oddCount<<endl;
    cout<<endl<<"Even Elements are: "<<evenCount<<endl;

}

/*


*/