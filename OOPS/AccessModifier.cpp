/*

private
protected
public


*/

#include<iostream>
using namespace std;

class Test{

    private:
    int a=10;

    protected:
    int b=20;

    public:
    int c=30;

};

int main()
{
    Test t1;
    cout<<t1.c<<endl;
    // cout<<t1.b<<endl; not accessible
    // cout<<t1.a<<endl; not accessible

}