#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Get infomation
    cout << "Name: ";
    string name;
    getline(cin, name);
    if (name == "") {
        cout << "You must enter a name\n";
        return 1;
    }
    
    cout << "Taxable income: ";
    int income = 0;
    cin >> income;
    cin.ignore(10000, '\n');
    if (income < 0) {
        cout << "The taxable income must be nonnegative\n";
        return 1;
    }
    
    cout << "Occupantion: ";
    string occupantion;
    getline(cin, occupantion);
    if (occupantion == "") {
        cout << "You must enter an occupation\n";
        return 1;
    }
    
    cout << "Number of children: ";
    int num_children = 0;
    cin >> num_children;
    cin.ignore(10000, '\n');
    if (num_children < 0) {
        cout << "The number of children must be nonnegative";
        return 1;
    }
    
    // Calculate the tax
    float tax = 0.0;
    if (income < 50000) {
        tax = income * 0.04;
        tax = tax - num_children * 200;
        if (tax < 0) {
            cout << "Tax must be nonnegative\n";
            return 1;
        }
    }
    else if(income < 120000) {
        if (occupantion == "engineer" or occupantion == "scientist") {
            tax = 50000 * 0.04 + (income - 50000) * 0.05;
        } else {
            tax = 50000 * 0.04 + (income - 50000) * 0.06;
        }
        tax = tax - num_children * 200;
        if (tax < 0) {
            cout << "Tax must be nonnegative\n";
            return 1;
        }
    }
    else {
        if (occupantion == "engineer" or occupantion == "scientist") {
            tax = 50000 * 0.04 + 70000 * 0.05;
        } else {
            tax = 50000 * 0.04 + 70000 * 0.06;
        }
        tax = tax + (income - 120000) * 0.09;
    }
    
    // Display the result
    cout << "---" << endl;
    cout << name << " would pay $" << tax << endl;
}
