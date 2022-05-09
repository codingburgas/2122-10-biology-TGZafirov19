#include "pch.h"
#include "framework.h"
#include <iostream>
#include <windows.h>
#include <string>
#include <stdio.h>
#include"biohead.h"
using namespace std;
int h = 0;
int gender;

void mainMenu() {
    HANDLE l = GetStdHandle(STD_OUTPUT_HANDLE);

    begginig:
    SetConsoleTextAttribute(l, 13);

    cout << endl <<  "             Select your gender  " << endl;

    SetConsoleTextAttribute(l, 2);

    cout <<          "        Female - 1          Male - 2" << endl << endl;

    cin >> gender;

    if (gender > 2)
    {
        cout << "Incorrect Input" << endl;
        Sleep(2000);
        system("cls");
        goto begginig;
    }

    SetConsoleTextAttribute(l, 10);

    cout << "Please enter your height:" << endl << endl;

    cin >> h;
    system("cls");
  
}


void bmiCalc() {
    HANDLE l = GetStdHandle(STD_OUTPUT_HANDLE);
    
    int height =0 , kg = 0;
    if ((h < 50 && gender == 1) || (h < 58 && gender == 2))
    {
        SetConsoleTextAttribute(l, 4);
        cout << "Incorrect input";
    }
    
  
    else
    {
        if (gender == 1)
        {
            height = 147;
            kg = 40;
            while (h > height) {
                height += 2.5;
                kg++;
            }
            if (height > 175)kg += 3.5;
            SetConsoleTextAttribute(l, 6);
            cout << "Your perfect body mass is: " << kg << endl << endl;
        }
        else if(gender == 2)
        {
            height = 147;
            kg = 42;
            while (h > height) {
                height += 1.5;
                kg++;
                
            }
            if (height > 175)kg += 5.5;
            SetConsoleTextAttribute(l, 6);
            cout << "Your perfect body mass is: " << kg << endl << endl;
        }
    }
}


void foodCalc() {

    HANDLE l = GetStdHandle(STD_OUTPUT_HANDLE);

    int a, b;

    foodChoice:
    cout << endl;

    cout << "Choose a specific food:" << endl;

    cout << endl;

    SetConsoleTextAttribute(l, 13);

    cout << " 1 - Meatballs     " << "     11 - Carrot" << "             21 - Spinach" << endl;

    SetConsoleTextAttribute(l, 6);

    cout << " 2 - Mashed potato " << "     12 - Red cabbage " << "       22 - Lemon" << endl;

    SetConsoleTextAttribute(l, 13);

    cout << " 3 - Meatloaf" << "           13 - Cabbage" << "            23 - Mango" << endl;

    SetConsoleTextAttribute(l, 6);

    cout << " 4 - Mushroom " << "          14 - Orange " << "            24 - Watermelon" << endl;

    SetConsoleTextAttribute(l, 13);

    cout << " 5 - Cheese " << "            15 - Bacon" << "              25 - Strawberry" << endl;

    SetConsoleTextAttribute(l, 6);

    cout << " 6 - Mozzarella " << "        16 - Ham" << "                26 - Kiwi" << endl;

    SetConsoleTextAttribute(l, 13);

    cout << " 7 - Parmesan " << "          17 - Pepperoni " << "         27 - Pomelo" << endl;

    SetConsoleTextAttribute(l, 6);

    cout << " 8 - Cheddar cheese" << "     18 - Sausage" << "            28 - Blueberry" << endl;

    SetConsoleTextAttribute(l, 13);

    cout << " 9 - Meat " << "              19 - Onion " << "             29 - Chicken" << endl;

    SetConsoleTextAttribute(l, 6);

    cout << "10 - Tomato " << "            20 - Brussels sprout" << "    30 - Rice" << endl << endl;



    cin >> a;
    if (a < 1 || a > 30)
    {
        SetConsoleTextAttribute(l, 4);
        cout << "Incorrect Input!" << endl;
        Sleep(2000);
        system("cls");
        goto foodChoice;
    }
    
    cout << endl;
    system("cls");


    SetConsoleTextAttribute(l, 10);

    cout << "How many grams: ";


    cin >> b;

    cout << endl;
    system("cls");

    SetConsoleTextAttribute(l, 10);

    cout << "Your kcal - ";
    switch (a)
    {


    case 1: cout << b * 1.97; break;

    case 2: cout << b * 0.88; break;

    case 3: cout << b * 1.49; break;

    case 4: cout << b * 0.22; break;

    case 5: cout << b * 4.2; break;

    case 6: cout << b * 2.80; break;

    case 7: cout << b * 4.31; break;

    case 8: cout << b * 4.2; break;

    case 9: cout << b * 1.43; break;

    case 10: cout << b * 0.22; break;

    case 11:cout << b * 0.11; break;

    case 12: cout << b * 0.31; break;

    case 13: cout << b * 0.25; break;

    case 14: cout << b * 0.47; break;

    case 15: cout << b * 5.41; break;

    case 16: cout << b * 1.45; break;

    case 17: cout << b * 4.94; break;

    case 18: cout << b * 3.46; break;

    case 19: cout << b * 0.4; break;

    case 20: cout << b * 0.43; break;

    case 21: cout << b * 0.23; break;

    case 22: cout << b * 0.29; break;

    case 23: cout << b * 0.6; break;

    case 24: cout << b * 0.3; break;

    case 25: cout << b * 0.33; break;

    case 26: cout << b * 0.61; break;

    case 27: cout << b * 0.38; break;

    case 28: cout << b * 0.3; break;

    case 29: cout << b * 2.39; break;

    case 30: cout << b * 1.3; break;
    }
    cout << endl << endl;
    
}