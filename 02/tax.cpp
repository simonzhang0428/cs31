#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    string name = "", occupantion = "";
    int income = 0, num_children = 0;
    float tax = 0.0;
    
    cout << "Name: ";
    getline(cin, name);
    if (name == "") {
        cout << "You must enter a name\n";
        return 1;
    }
    
    cout << "Taxable income: ";
    cin >> income;
    cin.ignore(10000, '\n');
    if (income < 0) {
        cout << "The taxable income must be nonnegative\n";
        return 1;
    }
    
    cout << "Occupantion: ";
    getline(cin, occupantion);
    if (occupantion == "") {
        cout << "You must enter an occupation\n";
        return 1;
    }
    
    cout << "Number of children: ";
    cin >> num_children;
    cin.ignore(10000, '\n');
    if (num_children < 0) {
        cout << "The number of children must be nonnegative";
        return 1;
    }
    
    cout << name << " would pay $" << tax << endl;
//    cout << name << endl;
//    cout << income << endl;
//    cout << occupantion << endl;
//    cout << num_children << endl;
}
