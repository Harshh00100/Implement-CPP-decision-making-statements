#include <iostream>
using namespace std;

int main() {
    int choice;
    cout<<"enter day no. 1-7 of week \n" ;//menu
    cout<<"Enter your choice: ";
    cin >> choice;
    switch(choice) { //switch case
        case 1:
        cout<<"The day is Monday ";
        break;
        case 2:
        cout<<"The day is Tuesday ";
        break;
        case 3:
        cout<<"The day is Wednesday ";
        break;
        case 4:
        cout<<"The day is Thursday ";
        break;
        case 5:
        cout<<"The day is Friday ";
        break;
        case 6:
        cout<<"The day is Saturday ";
        break;
        case 7:
        cout<<"The day is Sunday ";
        break;
        default:
        cout<<"INVALID CHOICE!!!!";//default statement
    }
}
