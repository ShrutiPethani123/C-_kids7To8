#include <iostream>
using namespace std;

class Student
{

    int age;
    int id;
    string name;
    string address;
    int standard;

public:
    void getData()
    {
        cout << "Enter your name: ";
        cin >> name;
        cout << "Enter your id: ";
        cin >> id;
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter address: ";
        cin >> address;
        cout << "Enter std:";
        cin >> standard;
    }

    void display()
    {
        cout << "Name : " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Id: " << id << endl;
        cout << "Address: " << address << endl;
        cout << "Standard: " << standard << endl;
    }
};

int main()
{
    // Student s1;
    // s1.getData();
    // s1.display();

    // Student s2;
    // s2.getData();
    // s2.display();

    // array of object

    int choice;
    Student s[3];
    while (1)
    {

        cout << "0.exit" << endl;
        cout << "1.Add Employee" << endl;
        cout << "2.Display Employee" << endl;
        cout << "3.search Employee" << endl;

        cout << "Enter a choice: ";
        cin >> choice;
        switch (choice)
        {
        case 0:
            exit(0);
            break;
        case 1:
            for (int i = 0; i < 3; i++)
            {
                cout << "-------Enter Details for student: " << i + 1 << endl;
                s[i].getData();
                cout << endl;
            }
            break;
        case 2:
            for (int i = 0; i < 3; i++)
            {
                cout << "-------------Details of student: " << i + 1 << endl;
                s[i].display();
                cout << endl;
            }
            break;
        case 3:
            break;
        default:
            cout << "Invalid choice" << endl;
        }
    }
}

/*

1. Add Student
2. Display student
3. search student

*/
