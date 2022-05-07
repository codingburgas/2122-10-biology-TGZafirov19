#include <iostream>
#include "..\libr_proj\biohead.h"
using namespace std;
int main()
{
    int choice;

    cout << "What are you here for?" << endl << "Food calculator - 1     BMI chart - 2" << endl;

    cin >> choice;

    if (choice == 2) {
        mainMenu();
        bmiCalc();

    }
    else {
        foodCalc();
    }
}