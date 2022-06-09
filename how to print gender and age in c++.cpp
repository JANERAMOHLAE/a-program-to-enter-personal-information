// how to print gender and age in c++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;


int main() {
    string last, first, middle;
    int age;
    string birthday;
    string gender;
    string address;


    cout << "Enter you lastname: ";
    cin >> last;


    cout << "Enter you firstname: ";
    cin >> first;


    cout << "Enter you middlename: ";
    cin >> middle;


    cout << "Enter your birthday: ";
    cin >> ws;
    getline(cin, birthday);


    cout << "Enter your age: ";
    cin >> age;


    cout << "Enter your gender: ";
    cin >> gender;


    cout << "Enter your permanent address: ";
    cin >> ws;
    getline(cin, address);


    cout << "Hello " << first << " " << middle << " " << last << endl;
    cout << "Your birthday is " << birthday
        << " and now you are " << age << " years old." << endl;
    cout << "You are " << gender << endl;
    cout << "and you live at " << address << endl;


    return 0;
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
