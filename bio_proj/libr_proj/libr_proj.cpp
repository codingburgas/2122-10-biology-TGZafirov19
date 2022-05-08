#include "pch.h"
#include "framework.h"
#include<iostream>
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

    cout << " 1 - Yellow Cheeze " << "    11 - Banana" << "     21 - Potatoes" << endl;
    cout << " 2 - White Cheeze " << "     12 - Carrots " << "   22 - Tomatoes" << endl;
    cout << " 3 - Mushrooms" << "         13 - Lamb" << "       23 - Beans" << endl;
    cout << " 4 - Cucumber " << "         14 - Apple " << "     24 - Peppers" << endl;
    cout << " 5 - Pineapple " << "        15 - Milk" << "       25 - Peas" << endl;
    cout << " 6 - Yoghurt " << "          16 - Bacon" << "      26 - Lentils" << endl;
    cout << " 7 - Mackerel " << "         17 - Rice " << "      27 - Pumpkin" << endl;
    cout << " 8 - Olives" << "            18 - Sausage" << "    28 - Veal" << endl;
    cout << " 9 - Shrimp " << "           19 - Chicken " << "   29 - Egg white" << endl;
    cout << "10 - Pork " << "             20 - Peanuts" << "    30 - Yolk" << endl << endl;
    
    cin >> a;

    cout << "How many grams" << endl;

    cin >> b;

    cout << "Your kcal - ";

    switch (a)
    {

    case 1: cout << b * 3.3; break;
    case 2: cout << b * 3; break;
    case 3: cout << b * 0.14; break;
    case 4: cout << b * 0.1; break;
    case 5: cout << b * 0.41; break;
    case 6: cout << b * 0.4; break;
    case 7: cout << b * 2.23; break;
    case 8: cout << b * 1.15; break;
    case 9: cout << b * 1.1; break;
    case 10: cout << b * 2.7; break;
    case 11: cout << b * 0.95; break;
    case 12: cout << b * 0.41; break;
    case 13: cout << b * 2.26; break;
    case 14: cout << b * 0.4; break;
    case 15: cout << b * 0.4; break;
    case 16: cout << b * 4.1; break;
    case 17: cout << b * 3.2; break;
    case 18: cout << b * 4.5; break;
    case 19: cout << b * 1.2; break;
    case 20: cout << b * 5.6; break;
    case 21: cout << b * 1; break;
    case 22: cout << b * 1.16; break;
    case 23: cout << b * 0.17; break;
    case 24: cout << b * 0.2; break;
    case 25: cout << b * 0.7; break;
    case 26: cout << b * 1.05; break;
    case 27: cout << b * 0.22; break;
    case 28: cout << b * 3.3; break;
    case 29: cout << b * 0.17; break;
    case 30: cout << b * 0.55; break;

    }
}
