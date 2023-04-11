/*

switch(choice)
{
    case 1:
        break;
    case 2:
        break;
    default:

}

*/

#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter any number";
    char n;
    cin>>n;

    switch(n)
    {
        case '1':
             

        case '2':
            
        case '3':
            cout<<"Wednesday"<<endl;
            break;
        case 4:
            cout<<"Thursday"<<endl;
            break;
        case 5:
            cout<<"Friday"<<endl;
            break;
        case 6:
            cout<<"Satuarday"<<endl;
            break;
        case 7:
            cout<<"Sunday"<<endl;
            break;

        default:
            cout<<"Invlid Input!!"<<endl;
            break;

    }
}

/*
0. Write a program to input in weekdays and print day of week according to number (1 - Monday ... 7 - Sunday) 
1. Write a program to input month number and print total number of days(ex.input 1 - print 31 days).
2. create simple calculator using switch case.(+ , - ,* ,/ , %)
3. Write a program to input an alphabet and check whether it is vowel or consonant using switch case.
*/