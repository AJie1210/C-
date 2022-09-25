#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
#include <string.h>
using namespace std;
int main()
{
    string str;
    char ENG[200];
    int i, r = 0, j1, j2, k, x = -1, count = 0, recount, end;

    cin.getline(ENG, 190);
    str = ENG;

    for (i = 0; i <= 190; i++)
    {
        x = x + 1;
        if (ENG[i] == ' ' || ENG[i] == '\0')
        {
            recount = x;
            if (ENG[i] == '\0')
            {
                recount = x;
            }
            if (recount > count)
            {
                count = recount;
            }
            x = -1;
        }
        if (int(ENG[i]) == '\0')
        {
            break;
        }
    }

    cout << "Max = " << count << endl;
    cout << str << endl;

    for (j1 = 0; j1 < count + 2; j1++)
    {
        cout << "*";
    }
    cout << endl;
    while (true)
    {
        cout << "*";
        for (i = 0; i <= 190; i++)
        {
            cout << ENG[i];
            r = r + 1;

            if (ENG[i] == ' ')
            {
                for (k = 0; k < count - r; k++)
                {
                    cout << " ";
                }
                cout << "*" << endl;
                cout << "*";
                r = 0;
            }
            if (ENG[i] == '\0')
            {
                cout << "*" << endl;
                end = 1;
                break;
            }
        }
        if (end == 1)
        {
            break;
        }
    }
    for (j2 = 0; j2 < count + 2; j2++)
    {
        cout << "*";
    }
    cout << endl;

    system("pause");
    return 0;
}