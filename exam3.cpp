#include <iostream>
using namespace std;

// this program checks calories
int main()
{

    char workout;
    double weight, total;

    do
    {

        cout << "List of workouts: " << endl;
        cout << "J-Jogging (7 cal )" << endl;
        cout << "C-Cycling (5 cal )" << endl;
        cout << "W-Walking (3 cal )" << endl;
        cout << "Press x to exit" << endl;

        /* code */
        cout << "Which workout would you like to select?: ";
        cin >> workout;

        cout << "What is your weight?: ";
        cin >> weight;

        switch (workout)
        {
        case 'j':
        case 'J':
            total = weight * 7;

            cout << "Total calorie you burnt in a hour is= " << total << "cal\n\n";
            break;

        case 'c':
        case 'C':
            total = weight * 5;

            cout << "Total calorie you burnt in a hour is= " << total << "cal\n\n";
            break;

        case 'w':
        case 'W':

            total = weight * 3;

            cout << "Total calorie you burnt in a hour is= " << total << "cal\n\n";
            break;

        default:
            cout << "Sorry, your choice doesnot exist on the list";
            break;
        }

    } while (workout != 'x' && workout != 'X');

    return 0;
}