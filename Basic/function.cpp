/*

Function -> block of code

2 Types of function

1. built in function
2. User define function
    -> 4 types
    1. with r.t with arg
    2. with r.t without arg
    3. without r.t with arg.
    4. without r.t without arg


defination/declaration:

return_type  function name (argument)
{
    //body of function
}

calling :

function_name(argument);


->  without r.t without arg

void display()
{

}

-> with r.t without arg

int add()
{

}

-> with r.t with arg

int add(int x , int y)
{

}

-> without r.t with arg

void add(int c)
{

}


*/

#include<iostream>
using namespace std;
// void display(); - declaration

void display()
{
   cout<<"Hello..."<<endl; 
}
void add(int a , int b)
{
   cout<<"Addition of "<<a <<" and "<<b<<" is "<<a+b<<endl; 
}

int mul(int x,int y)
{
    return x*y;
}

int main()
{

    display(); // calling

    int a,b;
    cout<<"Enter two number: "<<endl;
    cin>>a>>b;
    add(a,b);
    int ans = mul(a,b);
    cout<<ans<<endl;
    cout<<mul(a,b)<<endl;

    // add(5,7);
    // add(3,4);

    return 0;

}

// -> make one function that take one argument and return sqare of that number
// Take three number from user and pass as argument and function return maximum of them.
// Take one number from user and find factroial of that number.
            // 5 - 5*4*3*2*1 = 120

// check number is prime or not using function.
// Take one number from user pass that number in function and return revese number.
    // n- 456
    // rev= 654

// Check the number is perfect number or not.
/*
6 -> 1 2 3 6 (1+2+3=6) -> perfect
8 -> 1 2 4 8(1+2+4=7)

6,28 


int isPerfect(int n)
{

}

// check the number is palindrom or not.

int isPalindrom()
{

}

121,3445,1267621 -> palidrom
233-> not palindrom

// Check the number is armstrong or not ?
/*

n= 5
len-1
5^1 = 5

407
len=3
4^3+0^3+7^3 = 64+343=407

1634
len=4
1^4 + 6^4 + 3^4 + 4^4 = 1634



Take two number from user and pass that two number in function and print all the even number between that range

a: 2
b: 8

2 4 6 8 

Take one number from user and check the number is palindrom or not ?

a - 454 - palidrom
a - 5459 - not palindrom


*/

*/