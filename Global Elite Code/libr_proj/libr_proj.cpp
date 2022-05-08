#include "pch.h"
#include "framework.h"
#include<iostream>
#include <windows.h>
#include <string>
#include"biohead.h"
using namespace std;
int h = 0;
void mainMenu() {
    
    int gender = 0;

    cout << endl <<  "             Select your gender  " << endl;

    cout <<          "          Female - 1       Male - 2" << endl << endl;

    cin >> gender;

    cout << "Please enter your height:" << endl << endl;

    cin >> h;
}


void bmiCalc() {
    int gender= 0, height =0 , kg = 0;
    if ((h < 50 && gender == 1) || (h < 58 && gender == 2))
    {
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
            cout << kg;
        }
        else
        {
            height = 147;
            kg = 42;
            while (h > height) {
                height += 1.5;
                kg++;
                
            }
            if (height > 175)kg += 5.5;
            cout << kg;
        }
    }
}


void foodCalc() {
    int a, b;

    cout << endl;

    cout << "Choose a specific food:" << endl;

    cout << endl;

    cout << " 1 - Meatballs     " << "     11 - Carrot" << "             21 - Spinach" << endl;
    cout << " 2 - Mashed potato " << "     12 - Red cabbage " <<"       22 - Lemon" << endl;
    cout << " 3 - Meatloaf" << "           13 - Cabbage" << "            23 - Mango" << endl;
    cout << " 4 - Mushroom " << "          14 - Orange " << "            24 - Watermelon" << endl;
    cout << " 5 - Cheese " << "            15 - Bacon" << "              25 - Strawberry" << endl;
    cout << " 6 - Mozzarella " << "        16 - Ham" << "                26 - Kiwi" << endl;
    cout << " 7 - Parmesan " << "          17 - Pepperoni " << "         27 - Pomelo" << endl;
    cout << " 8 - Cheddar cheese" << "     18 - Sausage" << "            28 - Blueberry" << endl;
    cout << " 9 - Meat " << "              19 - Onion " << "             29 - Chicken" << endl;
    cout << "10 - Tomato " << "            20 - Brussels sprout" << "    30 - Rice" << endl << endl;



    cin >> a;



    cout << "How many grams" << endl;



    cin >> b;



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
