#include<iostream>
using namespace std;

class Car{
    public:
    int wheel = 4;  // data Member or variable
    string color;

   
    void run() // member function/Method
    {
        cout<<"Running!!"<<endl; 
    }

    void speed();
};

// :: - scope resolution operator

void Car::speed()
{
    cout<<"100 km/h "<<endl; 
}

int main()
{
    Car bmw; // object
    bmw.run();
    bmw.color="red";
    cout<<"Color of BMW is: "<<bmw.color<<endl;
    cout<<"Wheel: "<<bmw.wheel<<endl;

    Car farari;
    farari.color="black";
    cout<<"Color of farari is: "<<farari.color<<endl;
    farari.run();
    farari.speed();

}

/*

Make one class name Employee and thereare dat members like name , id , address , contact no
and also one method display that print all the details of employee.

*/