// Marksdatatypes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
using namespace std;
#include <cmath>



int main() {
    int mark;

    cout << " Please enter your mark " << endl;
    cin >> mark;

    if (mark > 80) {
        cout << " Distiction";


    }
    else if (mark >= 60 && mark < 80) {
        cout << "Credit ";


    }
    else if (mark >= 50 && mark < 60) {
        cout << "Pass";


    }
    else if (mark >= 40 && mark < 50) {
        cout << "Supplementary";


    }
    else if (mark >= 30 && mark < 40) {
        cout << "Fail";

    }

    
    else if (mark <= 30 ) {
        cout << "Quit school";
    }
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
