/*
1. Gujarti
    1.Roti
        1. Plain roti
        2. Tandoori
        3. Butter
    2.sabji
        1. Bhindi
        2. Aloo
        3. sev Tamator
    3.Sweet
        1. Gulab Jamoon
        2. Jalebi
        3. Rabdi
2. Panjabi
3. Italian
4. South Indian
5. Fast Food

*/

#include <iostream>
using namespace std;

int main()
{
    int choice, gujaratiChoice, rotiChoice, qnt;
    while (1)
    {
        cout << "0.Exit" << endl;
        cout << "1.Gujarti" << endl;
        cout << "2. Panjabi" << endl;
        cout << "3.Italian" << endl;
        cout << "4.South Indian" << endl;
        cout << "5.Fast Food" << endl;
        cout << "Enter your choice ";
        cin >> choice;

        switch (choice)
        {
        case 0:
            exit(0);
        case 1:
            cout << "You selected Gujarati " << endl;
            cout << "1.Roti" << endl;
            cout << "2.Sabji" << endl;
            cout << "3.Sweet" << endl;
            cout << "Enter your choice ";
            cin >> gujaratiChoice;
            switch (gujaratiChoice)
            {
            case 1:
                cout << "you selected Roti in Gujarati" << endl;
                cout << "1. Plain Roti(10)" << endl;
                cout << "2.Butter Roti(20)" << endl;
                cout << "3.Tandori Roti(30)" << endl;
                cout << "Enter your choice ";
                cin >> rotiChoice;
                switch (rotiChoice)
                {
                case 1:
                    cout << "you selected plain roti" << endl;
                    cout << "How many Quantity do you want: ";
                    cin >> qnt;
                    cout << "your bill is " << qnt * 10 << endl;
                    break;
                case 2:
                    cout << "you selected Butter roti" << endl;
                    cout << "How many Quantity do you want: ";
                    cin >> qnt;
                    cout << "your bill is " << qnt * 20 << endl;
                    break;
                case 3:
                    cout << "you selected Tandori roti" << endl;
                    cout << "How many Quantity do you want: ";
                    cin >> qnt;
                    cout << "your bill is " << qnt * 30 << endl;
                    break;
                default:
                    cout << "Invalid choice!!" << endl;
                }
                break;
            case 2:
                cout << "you selected Sabji in Gujarati" << endl;
                break;
            case 3:
                cout << "you selected Sweet in Gujarati" << endl;
                break;
            default:
                cout << "Invalid choice!!" << endl;
            }

            break;
        case 2:
            cout << "You selected Panjabi " << endl;
            break;
        case 3:
            cout << "You selected Italian " << endl;
            break;
        case 4:
            cout << "You selected South Indian " << endl;
            break;
        case 5:
            cout << "You selected FastFood " << endl;
            break;
        default:
            cout << "Invalid choice!!" << endl;

        } // end of switch case
    }     // end of while
    return 0;
}