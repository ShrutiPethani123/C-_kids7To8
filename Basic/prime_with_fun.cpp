#include<iostream>
using namespace std;

// void prime(int a)
// {
//     int flag=0;
//     for(int i=2;i<a;i++)
//     {
//         if(a%i==0)
//         {
//             flag=1;
//             break;
//         }
//     }

//     if(flag==0)
//     {
//         cout<<"Prime Number"<<endl;
//     }else{
//         cout<<"Not Prime"<<endl;
//     }

// }

int isPrime(int a)
{
    for(int i=2;i<a;i++)
    {
        if(a%i==0)
        {
            return 0;
        }
    }

    return 1;

}

// 1- prime
// 0 - not prime



int main()
{
    int n;
    cout<<"Enter a no: ";
    cin>>n;
    // prime(n);

    int ans = isPrime(n);
    if(ans==1)
    {
        cout<<"Prime number "<<endl;
    }else{
        cout<<"Not Prime"<<endl;
    }
}