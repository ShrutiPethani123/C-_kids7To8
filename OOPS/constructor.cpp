/*

constructor: 

-> constructor name is same as class name
-> constructor do not have any return type
-> use: intialize the value of variables
-> whenever objects are created constructer will be called automatically

Types:

1. default constructor - no argument constructor
2. Perametrized constructor - with argument constructor
3. copy constructor 


*/

#include<iostream>
using namespace std;

class Test{

   
    public:
    double a,b;
    Test() // default constructor
    {
        a=5;
        b=6;
        cout<<"Default constructor called!!!!!"<<endl;
    }

    Test(int c , int d) // perametrizes constructor
    {
        this->a=c;
        b=d;
        cout<<" Int Perametrized constructor called!!!!!"<<endl;

    }

    Test(int a)
    {
       this->a=a;
    }

    Test(Test &obj)
    {
        this->a = obj.a;
        this->b=obj.b;
    }

};

int main()
{

    Test t1;
    cout<<t1.a<<" "<<t1.b<<endl;

    Test t2(3,9);
    
    cout<<t2.a<<" "<<t2.b<<endl;

    Test t3(100);
    cout<<t3.a<<" "<<t3.b<<endl;

    Test t4(t2);
    cout<<t4.a<<" "<<t4.b<<endl;

    Test t5(t1);
    cout<<t5.a<<" "<<t5.b<<endl;


}