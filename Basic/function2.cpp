#include<iostream>
using namespace std;


// int isPerfect(int n)
// {
//     int sum=0;
//     for(int i=1;i<n;i++)
//     {
//         if(n%i==0)
//         {
//             sum=sum+i;
//         }
//     }

//     if(n==sum)
//         return 1;
//     else
//         return 0;

// }

int isPalindrom(int n)
{
    int rem,rev=0,temp;
    temp=n;
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }

    if(rev==temp)
    {
        return 1;
    }else{
        return 0;
    }
}


int main()
{
    int n;
    cout<<"Enter a no: ";
    cin>>n;
    int ans = isPalindrom(n);

    if(ans==1)
    {
        cout<<"Palidrom Number"<<endl;
    }else{
        cout<<"Not Palindrom"<<endl;
    }
}