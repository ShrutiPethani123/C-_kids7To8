#include<iostream>
using namespace std;

class Car{

    public:
    // data member
    int year;
    string model;
    

    //Member function / Method

    void run()
    {
      cout<<"Car Running!!"<<endl;  
    }

    void speed();
};

// :: - scope resolution operator
void Car::speed()
{
    cout<<"Speed 100km/h"<<endl;
}

int main()
{
    Car c1; // object
    c1.run();
    c1.year=2022;
    c1.model="xyz";
    cout<<c1.year<<" "<<c1.model<<endl;

    Car c2;
    c2.run();
    c2.model="abc";
    cout<<c2.model<<endl;
    c2.speed();


}
