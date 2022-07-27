#include <iostream>
using namespace std;

class logic
{

public:
    int x = 0, y = 0;
    logic();
    char Bool(int val);
    void conjunction(bool check);
    void disjunction(bool check);
    void exclusiveOr(bool check);
    void conditional();
    void negation();
};

logic::logic()
{
    cout << "Start of the program: " << endl;
}

char logic::Bool(int val)
{
    if (val == 0)
    {
        return 'T';
    }
    else
    {
        return 'F';
    }
}

void logic::conjunction(bool check)
{

    for (int x = 0; x <= 1; x++)
    {
        for (int y = 0; y <= 1; y++)
        {
            cout << Bool(x) << "   |   " << Bool(y) << "   |   ";
            if (check)
            {
                cout << Bool(x & y) << endl;
            }
            else
            {
                cout << Bool(!(x & y)) << endl;
            }
        }
    }
}

void logic::disjunction(bool check)
{

    for (int x = 0; x <= 1; x++)
    {
        for (int y = 0; y <= 1; y++)
        {
            cout << Bool(x) << "   |   " << Bool(y) << "   |   ";
            if (check)
            {
                cout << Bool(x | y) << endl;
            }
            else
            {
                cout << Bool(!(x | y)) << endl;
            }
        }
    }
}

void logic::exclusiveOr(bool check)
{

    for (int x = 0; x <= 1; x++)
    {
        for (int y = 0; y <= 1; y++)
        {
            cout << Bool(x) << "   |   " << Bool(y) << "   |   ";

            if (check)
            {
                cout << Bool(x ^ y) << endl;
            }
            else
            {
                cout << Bool(!(x ^ y)) << endl;
            }
        }
    }
}

void logic::conditional()
{

    for (int x = 0; x <= 1; x++)
    {
        for (int y = 0; y <= 1; y++)
        {
            cout << Bool(x) << "   |   " << Bool(y) << "   |   ";
            cout << ((!x) | y) << endl;
        }
    }
}

void logic::negation()
{

    for (int x = 0; x <= 1; x++)
    {
        for (int y = 0; y <= 1; y++)
        {
            cout << Bool(x) << "   |   " << Bool(y) << "   |   " << Bool(!x) << "   |   " << Bool(!y) << endl;
        }
    }
}

int main()
{

    int ch;
    logic logic;

    cout << "      MENU      " << endl;
    cout << "1.Conjunction" << endl;
    cout << "2.Disjunction" << endl;
    cout << "3.Exclusive OR" << endl;
    cout << "4.Conditional" << endl;
    cout << "5.Biconditional" << endl;
    cout << "6.Exclusive NOR" << endl;
    cout << "7.Negation" << endl;
    cout << "8.Nand" << endl;
    cout << "9.Nor" << endl;
    cout << "Enter your choice" << endl;
    cin >> ch;

    switch (ch)
    {
    case 1:
    {

        logic.conjunction(true);
        break;
    }
    case 2:
    {
        logic.disjunction(true);
        break;
    }
    case 3:
    {
        logic.exclusiveOr(true);
        break;
    }
    case 4:
    {
        logic.conditional();
        break;
    }
    case 5:
    {
        logic.exclusiveOr(false);
        break;
    }
    case 6:
    {
        logic.exclusiveOr(false);
        break;
    }
    case 7:
    {
        logic.negation();
        break;
    }
    case 8:
    {
        logic.conjunction(false);
        break;
    }
    case 9:
    {
        logic.disjunction(false);
        break;
    }
    default:
    {
        cout << "Wrong choice: " << endl;
    }
    }

    return 0;
}