#include <iostream>
#include "..\libr_proj\biohead.h"
using namespace std;
int main()
{
    int choice;
    cout << "_____________________________________________" << endl;

    cout << "|         What are you here for?            |" << endl;

    cout << "|___________________________________________|" << endl;

    cout << "| Food calculator - 1   |   BMI chart - 2   |" << endl;

    cout << "|_______________________|___________________|" << endl;

    cin >> choice;

    if (choice == 2) {
        mainMenu();
        bmiCalc();

    }
    else {
        foodCalc();
    }
}


           