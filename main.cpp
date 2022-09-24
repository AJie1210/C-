#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
#include <string.h>
using namespace std;
int main()
{

    string str;
    char MP[200];
    int i, j, x = 0, y = 0;
    int z = 0, t = 0, l;

    cin.getline(MP, 200);
    str = MP;

    while (true)
    {
        memset(MP, 0, 200);
        vector<char> vec_str(str.begin(), str.end());
        copy(str.begin(), str.end(), MP);

        for (i = 0; i < 200; i++)
        {
            if (MP[i] == 97 || MP[i] == 65)
            {
                for (t = 0; t < 1; t++)
                {
                    x = i + 1;
                }
                cout << "i = " << i << endl;
                cout << "x = " << x << endl;
                for (j = x; j < 200; j++)
                {
                    if (MP[j] == 97 || MP[j] == 65)
                    {
                        break;
                    }
                    if (MP[j] == 76 || MP[j] == 108)
                    {
                        y = j;
                        cout << "j = " << j << endl;
                        l = 1;
                        break;
                    }
                }
            }
            t = 0;
            if (l == 1)
            {
                break;
            }
            if (int(MP[i]) == NULL)
            {
                z = 1;
                break;
            }
            cout << "z b = " << z << endl;
        }
        if (z == 1)
        {
            cout << "z a = " << z << endl;
            break;
        }

        str = str.erase(x, y);
        l = 0;
    }

    cout << "Ans = " << str << endl;

    system("pause");
    return 0;
}