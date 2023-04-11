/*
Inheritance:

A (parent , super , base)
|
B (child , sub , derived)


Types:

1. single level

    A
    |
    B

2. Multi Level

    A
    |
    B
    |
    C
    |
    D


3. Multiple (multiple parent and single child)

    A   B
    \   /
      C

4. Hyrarchical (multipal child of single parent)

         A
        / \
        B  C

5. Hybrid

        A
        |
        B
       / \
      C   D
          |
          E 

*/

#include<iostream>
using namespace std;

class Animal{

    public:
    void eat(){
        cout<<"Eating...."<<endl;
    }
};

class Dog: public Animal{

    public:
    void bark()
    {
        cout<<"Barking!!"<<endl;
    }

};

int main()
{

    Animal a;
    a.eat();
    // a.bark();


    Dog d;
    d.bark();
    d.eat();
}