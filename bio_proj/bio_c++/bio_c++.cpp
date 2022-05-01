#include <iostream>
using namespace std;
int main()
{
    int choice, gender, h, help = 0;

    float height, kg;

    cout << "What are you here for?" << endl << "Food calculator - 1     BMI chart - 2" << endl;

    cin >> choice;

    if (choice == 2)
    {
        cout << "put in your gender" << endl;

        cout << "female - 1       male - 2" << endl << endl;

        cin >> gender;

        cout << "please enter your height" << endl << endl;

        cin >> h;

        if ((h < 50 && gender == 1) || (h < 58 && gender == 2))
        {
            cout << "incorrect input";
        }
        else
        {
            if (gender == 1)
            {
                height = 147;
                kg = 47;
                while (h > height) {
                    height += 2.5;
                    kg++;
                }
                if (height > 175)kg += 3;
                cout << kg;
            }
            else
            {
                height = 147;
                kg = 47;
                while (h > height) {
                    height += 1.5;
                    kg++;
                }
                if (height > 175)kg += 8;
                cout << kg;
            }
        }
    }
    else
    {

        int a, b;

        cout << endl;

        cout << "Pick food" << endl;

        cout << endl;

        cout << "1 - Kashkaval " << "    11 - Banan" << "          21 - Kartofi" << endl;
        cout << "2 - Sirene " << "       12 - Morkovi " << "       22 - Domat" << endl;
        cout << "3 - Gubi" << "          13 - Agneshki but" << "   23 - Bob" << endl;
        cout << "4 - Krastavica " << "   14 - Qbulka " << "        24 - Chushki" << endl;
        cout << "5 - Ananas " << "       15 - Pryasno mlyako" << " 25 - Grah" << endl;
        cout << "6 - Kiselo mlqko " << " 16 - Bekon" << "          26 - Leshta" << endl;
        cout << "7 - Skumriq " << "      17 - Oriz " << "          27 - Tikvichka" << endl;
        cout << "8 - Maslini" << "       18 - Lukanka" << "        28 - Teleshka kayma" << endl;
        cout << "9 - Skaridi " << "      19 - Pileshko meso " << " 29 - Beltyk" << endl;
        cout << "10 - Svinsko meso " << "20 - Fustuci" << "        30 - Zhyltyk" << endl << endl;

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
}