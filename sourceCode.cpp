#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
#include <sstream>

using namespace std;

int main()
{

    //x+22

    cout << "Currently it only works with: '+' and '-'.," << endl;
    cout << "Support for quadratic and square roots will be added soon. Also negative numbers only works when its the X." << endl;
    cout << "Write the formulas like this: x31+2 or x45-2" << endl;
    cout << " " << endl;

    string formula;
    int x = 0;
    bool pl;
    bool multiply;

    cout << "Enter the formula." << endl;
    cin >> formula;

    cout << "what is X?" << endl;
    cin >> x;

    int n = 0;
    char form = formula[0];
    stringstream number;
    stringstream numberr;
    string numberr2;
    string number2;
    string s;
    string s2;

    int lenght = formula.length();

    for (int i = 0; i < lenght; i++)
    {
        n++;
        form = formula[n];

        if (form == '+')
        {
            pl = true;
            int number3 = n;
            number3++;
            goto check2;
        }

        if (form == '-')
        {
            pl = false;
            int number3 = n;
            number3++;
            goto check2;
        }


        if (form == '*')
        {
            multiply = true;
            int number3 = n;
            number3++;
            goto check2;
        }

        if (isdigit(form))
        {
            number2 = form;
            number << number2;
            s = number.str();
        }
    }

    check2:
        for (int l = 0; l < lenght; l++)
        {
            n++;
            form = formula[n];

        if (isdigit(form))
        {
            numberr2 = form;
            numberr << numberr2;
            s2 = numberr.str();
        }
        }

        stringstream p(s);
        stringstream q(s2);
        int part1 = 0;
        int part2 = 0;

        p >> part1;
        q >> part2;


        //22x + 05
        if (pl == true)
        {
            int conclusion = part1 * x + part2;
            cout << "The formula is: " << conclusion << endl;
        }

        if (pl == false)
        {
            int conclusion = part1 * x - part2;
            cout << "The formula is: " << conclusion << endl;
        }

    system("pause");
    return 0;
}
