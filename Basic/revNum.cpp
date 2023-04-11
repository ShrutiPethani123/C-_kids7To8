#include<iostream>
using namespace std;

int revNum(int n) //1567
{
    int rem,rev=0;
    while(n!=0)  //1567 156 15 1
    { 
        rem=n%10; // 7 6 5 1
        rev=rev*10+rem; //7 76 765 7651
        n=n/10; //156 15 1 0

    }

    return rev;

}

int main()
{
    int n;
    cout<<"Enter a no: ";
    cin>>n;
    cout<<"Revese Number: "<<revNum(n)<<endl;
 
}